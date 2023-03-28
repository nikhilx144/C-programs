#include <stdio.h>
void swap(int *p, int *q);
void printarray(int n, int arr[]);
int main()
{
    int arr[100], n, i, j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    } 
    printf("Sorted Array\n");
    printarray(n, arr);

}

void swap(int *p, int *q)
{
    int c = *p;
    *p = *q;
    *q = c;
}

void printarray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
