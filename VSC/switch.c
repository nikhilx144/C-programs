#include <stdio.h>
void main()
{
    int x, k;
    printf("Enter x value: ");
    scanf("%d", &x);
    switch (k)
    {
        case 5:
        if (x >= 0 && x <= 10)
            printf("%d", k);
            break;
        case 12:
        if (x > 10 && x <= 20)
            printf("%d", k);
            break;
        case 16:
        if (x > 20 && x <= 30)
            printf("%d", k);
            break;
        default:
        k = 20;
        printf("%d", k);
    }
}