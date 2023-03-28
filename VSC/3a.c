#include <stdio.h>
int main()
{
    int n, i = 0, j, b[100];
    printf("Enter decimal number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        b[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary number equivalent: ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", b[j]);
    }
}
