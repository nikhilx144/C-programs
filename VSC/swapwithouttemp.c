#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter number1: ");
    scanf("%d", &a);
    printf("Enter number2: ");
    scanf("%d", &b);
    printf("Before swap\na = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap\na = %d, b = %d", a, b);
}