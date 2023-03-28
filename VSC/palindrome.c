#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20], s2[20];
    printf("Enter a string:");
    scanf("%s", s1);
    int n = strlen(s1), i;
    for (i = 0; s1[i] != '\0'; i++)
        s2[n - i - 1] = s1[i]; 
    printf("%s", s2);
    return 0;
}