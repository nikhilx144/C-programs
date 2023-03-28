#include<stdio.h>
#include<math.h>
int main(){
    double a, b, c, root1, root2, D, Re, Im;
    printf("Enter a value: ");
    scanf("%lf", &a);
    printf("Enter b value: ");
    scanf("%lf", &b);
    printf("Enter c value: ");
    scanf("%lf", &c);
    printf("Quadratic Equation\n%.2lfx^2 + %.2lfx + %.2lf\n", a, b, c);
    D = b*b - 4*a*c;
    if (D>0){
        root1 = (-b + sqrt(D))/(2*a);
        root2 = (-b - sqrt(D))/(2*a);
        printf("Roots of the quadratic equation\nRoot1 = %.2lf\nRoot2 = %.2lf", root1, root2);
    }
    else if (D == 0){
        root1 = root2 = (-b)/(2*a);
        printf("Roots of the quadratic equation\nRoot1 = %.2lf\nRoot2 = %.2lf", root1, root2);
    }
    else{
        Re = (-b)/(2*a);
        Im = sqrt(-D)/(2*a);
        printf("Roots of the quadratic equation\nRoot1 = %.2lf + %.2lfi\nRoot2 = %.2lf - %.2lfi", Re,  Im, Re,  Im);
    }
}