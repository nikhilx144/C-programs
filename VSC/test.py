import logging
import numpy as np
from cleverhans.attacks import SaliencyMapMethod, FastGradientMethod, CarliniWagnerL2
from cleverhans.attacks_tf import fgsm, jsma
from cleverhans.utils_tf import model_train ,model_eval, batch_eval, model_argmax
from cleverhans.utils import other_classes
from cleverhans.utils_keras import KerasModelWrapper
# Generate adversarial samples for all test datapoints


def Adversarial_JSMA(x_train_scaled, x_test_scaled, y_train, y_test, classes, batch, predictions, sess, x, y, model, target_class):
    source_samples = x_test_scaled.shape [0]
    logging.info(" --------------Adversarial Generation stage --- --")
    results = np. zeros (( classes, source_samples ), dtype ='i')
    # Rate of perturbed features for each test set example and target class
    perturbations = np. zeros (( classes , source_samples ), dtype ='f')
    wrap = KerasModelWrapper(model)
    results = np.zeros((classes, source_samples), dtype='i')
    # Rate of perturbed features for each test set example and target class
    perturbations = np.zeros((classes, source_samples), dtype='f')
    x_adv = np. zeros ((source_samples , x_test_scaled.shape [1]))
    jsma = SaliencyMapMethod(wrap, sess=sess)
    jsma_params = {'theta': 1., 'gamma': 0.1, 'clip_min': 0., 'clip_max': 1., 'y_target': None}
    x_adv = np. zeros ((source_samples , x_test_scaled.shape [1]))
    for sample_ind in range (0, source_samples ):
        print('Attacking input %i/%i' % (sample_ind + 1, source_samples))
        current_class = int(np. argmax ( y_test [ sample_ind ]))
        sample = x_test_scaled[sample_ind:(sample_ind + 1)]
        # Only target the target_class = normal
        for target in [target_class]:
            if current_class == target_class:
                break
            # This call runs the Jacobin-based saliency map approach
            one_hot_target = np.zeros((1, classes), dtype=np.float32)
            one_hot_target[0, target] = 1
            jsma_params['y_target'] = one_hot_target
            x_adv_inputs = jsma.generate_np(sample, **jsma_params)
            # Check if success was achieved
            res = int(model_argmax(sess, x, predictions, x_adv_inputs))
            # Compute number of modified features
            adv_x_reshape = x_adv_inputs.reshape(-1)
            test_in_reshape = x_test_scaled[sample_ind].reshape(-1)
            nb_changed = np.where(adv_x_reshape !=
            test_in_reshape)[0].shape[0]
            percent_perturb = float(nb_changed) / x_adv_inputs.reshape(-
            1).shape[0]
            # Update the arrays for later analysis
            results[target, sample_ind] = res
            perturbations[target, sample_ind] = percent_perturb
            x_adv[sample_ind] = x_adv_inputs
    nb_targets_tried = ((classes - 1) * source_samples)
    success_rate = float(np.sum(results)) / nb_targets_tried
    logging.info('Avg. rate of successful adv. examples {0:.4f}'.format(success_rate))
    # Compute the average distortion introduced by the algorithm
    percent_perturbed = np.mean(perturbations[np.where(perturbations!=0)])
    logging.info('Avg. rate of perturbed features {0:.4f}'.format(percent_perturbed))
    # Compute the average distortion introduced for successful samples only
    percent_perturb_success = np.mean(perturbations[np.where(perturbations!=0)] * (results[np.where(perturbations!=0)] == 1))
    logging.info('Avg. rate of perturbed features for successful adversarial examples {0:.4f}'.format(percent_perturb_success))
    eval_params = {'batch_size': batch }
    accuracy_adv = model_eval(sess, x, y, predictions, x_adv, y_test, args = eval_params)
    logging.info('JS-MA Test accuracy on adversarial examples : ' + str(accuracy_adv))
    return x_adv, accuracy_adv

