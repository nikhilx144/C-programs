#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *p;
    p=arr;
    printf("The value is %d\n",*p);
    p=p+1;
    printf("the value is %d\n",*p);
    p=p+3;
    printf("the value is %d\n",*p);
}