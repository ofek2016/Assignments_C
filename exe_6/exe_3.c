#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5


void main()
{
	int arr[SIZE];
	int arr2[SIZE];
	printf("insert 5 nember:\n");
	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &arr[i]);
		arr2[i] = arr[i];
	}
	for (int i = 1; i <= SIZE-1; i++)
	{
		arr[0] = arr2[SIZE - 1];
		arr[i ] = arr2[i-1];
	}
		  

	for (int i = 0; i < SIZE ; i++)
	{
	
		printf("%d\n", arr[i]);

	}
	system("pause");
}
