#include <stdio.h>
int main()
{
    char str[20];
    printf("enter something\n");
    gets(str);
    printf("you entered : %s\n", str);
    return 0;
}