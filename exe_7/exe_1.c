#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3
#define ROW 6
#define COL 3

int check(int arr1[], int arr2[])//סעיף א 
{
	for (int i = 0, j = SIZE - 1; i < SIZE, j >= 0; i++, j--)
	{
		if (arr1[i] != arr2[j])
		{
			return 0;
			break;
		}
		else return 1;
	}

}
int checkdo(int arr[][COL], int row, int col)//סעיף ב 
{
	for (int i = 0, s = row - 1; i < row, s >= 0; i++, s--)
	{
		for (int j = 0, t = col - 1; j < col, t >= 0; j++, t--)
		{
			if (arr[i][j] != arr[s][t])
			{
				return 0;
				break;
			}
			else
				return 1;
		}
	}
}



void main()
{
	//int arr1[SIZE];
	//int arr2[SIZE];
	//printf("please enter %d numbers:\n", SIZE);
	//for (int i = 0; i < SIZE; i++)
	//{
	//	scanf("%d", &arr1[i]);
	//}
	//printf("please enter %d numbers:\n", SIZE);
	//for (int j = 0; j < SIZE; j++)
	//{
	//	scanf("%d", &arr2[j]);
	//}
	//int x = check(arr1, arr2);
	//if (x == 0)
	//	printf("no mirror section a\n");//סעיף א
	//else
	//	printf("mirror section a\n");//סעיף א

		//int arr[ROW][COL] ;
		//for (int i = 0; i < ROW; i++)
		//{
		//	printf("please enter %d numbers for line number %d:\n", COL, i + 1);
		//	for (int j = 0; j < COL; j++)
		//	{
		//		scanf("%d", &arr[i][j]);
		//	}
		//}
		//int x = checkdo(arr, ROW, COL);
		//if (x == 0)
		//	printf("no mirror section b\n");//סעיף ב
		//else
		//{
	 //       printf("mirror section b\n");//סעיף ב
		//}


	int arr[ROW][COL] = { 0 };//סעיף ג 
	for (int i = 0; i < ROW; i++)
	{
		printf("please enter  %d numbers (0-9) to line %d:\n", COL, i + 1);
		for (int j = 0; j < COL; j++)
		{
			scanf("%d", &arr[i][j]);
			if (arr[i][j] < 0 || arr[i][j]> 9)
			{
				while (arr[i][j] < 0 || arr[i][j]> 9)
				{
			             printf("\nThe number is incorrect.\nPlease enter a                   new number in range 0-9: \n");
					scanf("%d", &arr[i][j]);
				}
			}
		}
	}
	int x = checkdo(arr, ROW, COL);
	if (x == 0)
	printf("not mirror section c\n");//סעיף ג
	else
		printf("mirror section c\n");//סעיף ג
	system("pause");
}