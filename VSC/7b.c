#include <stdio.h>
void printarray(int n, int arr[]);
int main(){
    int i, j, temp, a[20], min, n;
    printf("Enter the number of elemnets: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++){
        min = i;
        for (j = i + 1; j < n; j++){
            if (a[j] < a[min])
            {
                min = j;
            }
        }
    temp = a[i];
    a[i] = a[min];
    a[min] = temp;
    }
    printf("Sorted Array\n");
    printarray(n, a);
}

void printarray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
