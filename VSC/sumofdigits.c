#include <stdio.h>
void main()
{
    int n, n_cpy, rem, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    n_cpy = n;
    while (n_cpy > 0)
    {
        rem = n_cpy % 10;
        n_cpy /= 10;
        sum += rem;
    }
    printf("Sum of digits is %d", sum);
}