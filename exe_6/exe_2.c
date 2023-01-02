#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5


void main()
{
	int arr[SIZE]; 
	int sizearr = SIZE-1,p=0;
	printf("insert 5 nember:\n");
	for (int i = 0; i < SIZE; i++)
	{
		
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] != arr[sizearr])
		{
			p = 1;
		}
		sizearr--;
	}
	if (p == 0)
		printf("palindrome\n");
	else
	{
		printf("not a palindrome\n");
	}
	system("pause");
}
