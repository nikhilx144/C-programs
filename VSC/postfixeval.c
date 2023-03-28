#include <stdio.h>
#include <ctype.h>

int top = -1;
char stack[50];

void push(char c)
{
  stack[++top] = c;
}

int pop()
{
  return stack[top--];
}

int main()
{
  int num, n1, n2, n3, i = 0, ans;
  char e[50];
  scanf("%s", e);
  while (e[i] != '\0')
  {
    if (isdigit(e[i]))
    {
      num = e[i] - 48;
      push(num);
    }

    else
    {
      n1 = pop();
      n2 = pop();
      
      switch (e[i])
      {
        case '+':
        {
          n3 = n2 + n1;
          break;
        }

        case '-':
        {
          n3 = n2 - n1;
          break;
        }
        
        case '*':
        {
          n3 = n2 * n1;
          break;
        }
        
        case '/':
        {
          n3 = n2 / n1;
          break;
        }
      }
      push(n3);
    }
    i++;
  }
  ans = pop();
  printf("%d", ans);
}

