#include<stdio.h>
int main()
{
    int A[3][3];
    int i,j,sum = 0;
    printf("Enter the values of matrix A \n");
    for(i=0;i<3;i=i+1)
    {
    for(j=0;j<3;j=j+1)
    {
    scanf("%d",&A[i][j]);
    }
    }
    for(i=0;i<3;i=i+1)
    {
    for(j=0;j<3;j=j+1)
    {
    if(i+j==2)
    {
    sum=sum+A[i][j];
    }
    }
    }
    printf("sum=%d",sum);
}