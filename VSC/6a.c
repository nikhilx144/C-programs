#include<stdio.h>    
#include<stdlib.h>  
int main()
{  
    int a[10][10],b[10][10],c[10][10],m,n,i,j,k,p,q,sum;    
    printf("Matrix 1\n")  ;
    printf("Enter the number of rows: ");    
    scanf("%d",&m);    
    printf("Enter the number of columns: ");    
    scanf("%d",&n);
    printf("Matrxi 2\n");
    printf("Enter the number of rows: ");
    scanf("%d", &p);
    printf("Enter the number of columns: ");    
    scanf("%d", &q);
    while(1)
    {
        if (m == p && n == q)
        {
            printf("Enter the elements of Matrxi 1 one by one row wise\n");    
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    scanf("%d",&a[i][j]);
                }    
            }    
            printf("Enter the elements of Matrix 2 one by one row wise\n");    
            for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                {
                    scanf("%d",&b[i][j]);
                }    
            }   
            
            printf("Resultant Matrix\n");    
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                }    
            }    
            for(i=0;i<m;i++)    
            {
                for(j=0;j<n;j++)
                {
                    printf("%d\t", c[i][j]);    
                }    
            printf("\n");    
            }
            break;   
        }

        else
        {
            printf("Invalid Addition");
            break;
            
        } 
    }
}