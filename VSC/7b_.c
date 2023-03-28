#include <stdio.h>
int main()
{
    int count = 0, i = 0; 
    char s[50];
    printf("Enter the string: ");
    gets(s);
    while(s[i] != '\0')
    {
        count++;
        i++;
    }
    printf("Length of string is %d", count);
}