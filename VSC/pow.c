#include <stdio.h>
int power(int n, int exp)
{
    if (exp == 0)
        return 1;
    else
        return n * power(n, exp - 1);
}

int main()
{
    int num, pow;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter exponent: ");
    scanf("%d", &pow);
    printf("%d", power(num, pow));
}