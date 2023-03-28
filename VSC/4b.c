nclude<stdio.h>
#include<conio.h>
main()
{
    int i,j,n;
    clrscr();
    printf("enter n value\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%3d",i);
        for(j=i-1;j>=1;j--)
            printf("%3d",i);
        printf("\n");
    }
}
