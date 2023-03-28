#include <stdio.h>
#include <string.h>
int main () 
{
    char src[10] = "Morning";
    char dest[10];
    strcpy(dest, src);
    printf("Final copied string : %s\n", dest);
}