#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int insertElement(char arr[], int index, int element, int len)
{
  // int len = sixeof(arr) / sizeof(arr[0]);
  if (index > len)
  {
    return -1;
  }
  else
  {
    arr[len] = element;
  }
}

int deleteElement(char array[], int index, int len)
{
  // int len = sixeof(arr) / sizeof(arr[0]);
  if ((index > len) || (len == 0))
  {
    return -1;
  }
  else
  {
    for (int i = index; i < len - 1; i++)
      array[i] = array[i - 1];
  }
}

int main()
{
  int str[200];
  int size = sizeof(str) / sizeof(str[0]);
  int choice, position, del_i;
  char ele;
  while (1)
  {
    switch (choice)
    {
    case 1:
      printf("Where do you want to insert the elemnt: ");
      scanf("%d", &position);
      printf("Enter element: ");
      scanf("%c", &ele);
      insertElement(str, position, ele, size);
      break;

    case 2:
      printf("Enter the position of the element to be deleted: ");
      scanf("%d", del_i);
      deleteElement(str, del_i, size);
      break;
      
    default:
      printf("Invalid Input");
      break;
    }
  }
}