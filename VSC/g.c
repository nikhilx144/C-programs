#include<stdio.h>
#include<stdlib.h>
double mypow(double b,int ex)
{
double value=1;
int e;
e = abs(ex);
while (e != 0)
{
    value *= b;
    --e;
}
if(ex<0)
    value=1/value;
return value;
} 
int main(){
int exponent;
double base;
printf("Enter a base value:\n ");
scanf("%lf", &base);
printf("Enter an exponent value: ");
scanf("%d", &exponent);
printf("result = %lf", mypow(base,exponent));
return 0;
}
