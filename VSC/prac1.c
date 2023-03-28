#include <stdio.h>
#include <stdlib.h>
# define MAX 10

int top = -1, stack[MAX];

void push()
{
  int data;
  if (top == MAX - 1)
    printf("Stack Overflow\n");
  else
  {
    scanf("%d", &data);
    top++;
    stack[top] = data;
  }
}

void pop()
{
  if (top == -1)
    printf("Stack Underflow\n");
  else
    top--;
}

void display()
{
  if (top == -1)
    printf("Stack is empty\n");
  else
  {
    for(int i=top; i>=0; i--)
      printf("\n%d",stack[i]);
  }
}

void main()
{
  int choice;
  while (1)
  {
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      push();
      break;
    
    case 2:
      pop();
      break;

    case 3:
      display();
      exit(0);
      break;

    default:
      printf("Invalid Input\n");
      break;
    }
  }
}