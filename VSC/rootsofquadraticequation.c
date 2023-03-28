#include <stdio.h>
#include <math.h>
void main()
{
    double a, b, c, d, root1, root2, Im, Re;
    printf("Enter a value: ");
    scanf("%lf", &a);
    printf("Enter b value: ");
    scanf("%lf", &b);
    printf("Enter c value: ");
    scanf("%lf", &c);
    printf("Quadratic equation\n%.2lfx^2 + %.2lfx + %.2lf\n", a, b, c);
    d = sqrt(b*b - 4*a*c);
    if (d == 0)
    {
        root1 = (-b) / (2*a);
        root2 = (-b) / (2*a);
        printf("Real and equal roots\n");
        printf("Root1 = %.2lf\nRoot2 = %.2lf", root1, root2);
    }
    else if (d > 0)
    {
        root1 = (-b + d) / (2*a);
        root2 = (-b - d) / (2*a);
        printf("Real and distinct roots\n");
        printf("Root1 = %.2lf\nRoot2 = %.2lf", root1, root2);
    }
    else
    {
        Re = (-b) / (2*a);
        Im = sqrt(-d) / (2*a);
        printf("Imaginary roots");
        printf("Root1 = %.2lf + i%.2lf\nRoot2 = %.2lf - i%.2lf", Re, Im, Re, Im);
    }
}