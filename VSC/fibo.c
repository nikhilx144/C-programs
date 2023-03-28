#include <stdio.h>
void main()
{
    int n, n1, n2, n3, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    n1 = 0;
    n2 = 1;
    n3 = n1 + n2;
    printf("Fibo series: %d %d ", n1, n2);
    for (i = 3; i <= n; i++)
    {
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }
    
}