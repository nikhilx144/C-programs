#include <stdio.h>
#define size 10
int arr[size];

void init()
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = -1;
	}
}

void insert(int value)
{
	int key = value % size;
	if (arr[key] == -1)
		arr[key] = value;
	else
		printf("Collision\nUnable to insert");
}

void del(int value)
{
	int key = value % size;
	if (arr[key] != -1)
		arr[key] = -1;
	else
		printf("No element to delete");
}

void search(int value)
{
	int key = value % size;
	if (arr[key] == value)
		printf("Search found");
	else
		printf("Search not found");
}

void print()
{
	for (int i = 0; i < size; i++)
	{
		print("arr[%d] = %d\n", i, arr[i]);
	}
}

void main()
{

}