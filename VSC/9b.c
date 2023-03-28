#include <stdio.h>
#include <string.h>
int main () 
{
    char str[50] ="This is India";
    int len;
    len = strlen(str);
    printf("Length of %s is %d\n", str, len);
}