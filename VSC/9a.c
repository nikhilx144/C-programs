#include <stdio.h>
#include <string.h>
int main () 
{
    char s1[10]= "Morning";
    char s2[20]= "Good ";
    strcat(s2, s1);
    printf("s1 = %s\n",s1);
    printf("s2 = %s",s2);
}