#include <stdio.h>
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void selectionSort(int *arr, int n)
{
    int minindex, temp;
    printf("After selection sort\n");
    for (int i = 0; i < n - 1; i++)
    {
        minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
                minindex = j;
        }
        temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
}

void main()
{
    int arr[20], n;
    printf("Enter the number of elements in the array (1 - 20): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Before selection sort\n");
    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);
}
