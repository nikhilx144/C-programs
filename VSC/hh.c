#include <stdio.h>
#include <string.h>
int main(){
  char str[50];
  printf("Enter string: ");
  scanf("%s", str);
  printf("%s", strrev(str));
  return 0;
}