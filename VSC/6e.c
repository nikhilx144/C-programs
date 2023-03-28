#include <stdio.h>
int binary(int[], int, int, int);
void main()
{
    int a[100], i, n, key, pos;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter sorted elements: ");
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("Enter key: ");
    scanf("%d",&key);
    pos = binary(a,0,n-1,key);
    if(pos == -1)
        printf("Element not found.");
    else
        printf("Element found at %d position.",pos + 1);
}
int binary(int a[], int low, int high, int key)
{
    int mid;
    while(low <= high)
    {
        mid=(low + high)/2;
        if(key == a[mid])
            return mid;
        else if(key > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
