#include <stdio.h>
void main()
{
    int a, b, i, gcd;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    for (i = 0; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    printf("GCD of %d and %d is %d", a, b, gcd);
}