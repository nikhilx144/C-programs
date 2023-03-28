#include <stdio.h>
int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);
    return a;
}

void main()
{
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("GCD of %d and %d is %d", n1, n2, gcd(n1, n2));
}