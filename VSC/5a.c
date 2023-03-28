#include<stdio.h>
int fibo(int n);
int main()
{
	int n, i;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d ", fibo(i));
	}
}
int fibo(int n)
{
	if (n == 1 || n == 0)
		return n;
	else
		return fibo(n-1) + fibo(n-2);
}