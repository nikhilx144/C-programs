#include <stdio.h>
#include <stdlib.h>
# define MAX 10
int front = -1 ,rear = -1, queue[MAX];

void enqueue()
{
  int data;
  if (rear == MAX - 1)
  {
    printf("Queue is full\n");
    exit(1);
  }
  else
  {
    scanf("%d", &data);
    if (front == -1)
      front = 0;
    rear ++;
    queue[rear] = data;
  }
}

int dequeue()
{
  if (rear != 0 && rear == front)
  {
    printf("Queue is empty\n");
    exit(1);
  }
  else
  {
    int temp = queue[front];
    front++;
    return temp;
  }
}

void display()
{
  if (rear != 0 && rear == front)
    printf("Queue is empty");
  else
  {
    for (int i = front; i <= rear; i++)
      printf("%d\n", queue[i]);
  }
}

void main()
{
  int choice;
  printf("1. Enqueue\n2. Dequeue\n3. Display\n");
  while (1)
  {
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      enqueue();
      break;
    
    case 2:
      dequeue();
      break;

    case 3:
      display();
      exit(1);
      break;

    default:
      printf("Invalid Input");
      exit(1);
      break;
    }
  }
}