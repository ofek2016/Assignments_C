#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 7


void main()
{
	int arr[SIZE];
	int arr2[SIZE];
	int sum = 0,sum2=0,no=0,sizearr=SIZE-1;
	printf("insert 7 nember:\n");
	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &arr[i]);
		
	}
	for (int i = 0; i < SIZE; i++)
	{
		arr2[i] = arr[sizearr];
		sizearr--;
	}
	if(arr[0]==arr2[0])
	{ 
		printf("index %d\n", 0);
		no = 1;
	}
	else
	{
	for (int i = 0; i < SIZE; i++)
	{
		
		sum += arr[i];
		if (sum==sum2)
		{
			printf("index %d\n",i);
			no = 1;
		}
		sum2+=arr2[i];

	}
	}
	if (no==0)
	{
		printf("no index exists\n");

	}

	system("pause");
}
