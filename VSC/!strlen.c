#include <stdio.h>
int main()
{
    int i, count = 0;
    char s[20];
    printf("Enter string: ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
        count++;
    printf("Length of string is %d", count);
}