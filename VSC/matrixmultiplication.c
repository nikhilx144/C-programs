#include <stdio.h>
void main()
{
    int a[20][20], b[20][20], c[20][20], i, j, k, r1, c1, r2, c2;
    printf("Matrix 1\n");
    printf("Enter the number of rows: ");
    scanf("%d", &r1);
    printf("Enter the number of columns: ");
    scanf("%d", &c1);
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter a%d%d element: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMatrix 2\n");
    printf("Enter the number of rows: ");
    scanf("%d", &r2);    
    printf("Enter the number of columns: ");
    scanf("%d", &c2);
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter a%d%d element: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Resultant Matrix\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < r2; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}