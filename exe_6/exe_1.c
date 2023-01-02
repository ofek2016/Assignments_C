#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5


void main()
{
	int arr[SIZE];
	int k = 0,no=0;
    printf("insert 5 nember:\n");
	for (int i = 0; i < SIZE; i++)
	{
	   	 scanf("%d", &arr[i]);
	}
	k = arr[1] / arr[0];
	for (int i = 1; i < SIZE-1; i++)
	{
		if (k != arr[i+1] / arr[i])
			no = 1;

	}
	if (no == 1)
		printf("no engineering series\n");
	else
	{
		printf("engineering series\n");
	}

	system("pause");

