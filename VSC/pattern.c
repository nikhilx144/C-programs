#include <stdio.h>
int main()
{
    int n, row, col, j, sum = 0, first, temp;
    scanf("%d", &n);
    for (row = 0; row < n; row++)
    {
        first = row + 1;
        temp = n - 1;
        for (col = 0; col < row + 1; col++)
        {
            printf("%d ", first);
            first += temp;
            temp -= 1;
        }
        printf("\n");
    }
}