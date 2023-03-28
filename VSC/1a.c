#include <stdio.h>
int main()
{
	int i = 1, temp, max, min, n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter element 1: ");
	scanf("%d", &temp);
	max = temp;
	min = temp;
	while (i < n)
	{
		printf("Enter element %d: ", i + 1);
		scanf("%d", &temp);
		if (temp > max)
			max = temp;
		if (temp < min)
			min = temp;
		i++;
	}
	printf("Maximum:- %d", max);
	printf("\nMinimum:- %d", min);
}