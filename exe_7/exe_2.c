#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#define ROW 4//סעיף א
//#define COL 3//סעיף א
#define ROW 6//סעיף ב
#define COL 6//סעיף ב

char maxChar(char arr[][COL], int row, int col)
{
	int maxChar = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == 0 || i == row - 1) 
			{ if (arr[i][j] > maxChar)
			maxChar = arr[i][j]; 
			else continue; 
			}
			else if (j == 0 || j == col - 1) 
			{ if (arr[i][j] > maxChar) maxChar = arr[i][j];
			else continue; 
			}
			else continue;
		}
	}
	return maxChar;
}
void main()
{

	//char arr[ROW][COL] ;// סעיף א 
	//for (int i = 0; i < ROW; i++)
	//{
	//	printf("please enter  %d char for line %d:\n", COL, i + 1);
	//	for (int j = 0; j < COL; j++)
	//	{
	//		fseek(stdin, 0, SEEK_END);
	//		scanf("%c", &arr[i][j]);
	//	}
	//}
	//char x = maxChar(arr, ROW, COL);
	//printf("\nThe letter max char: %c\n",x);//סעיף א

	int minirow = 0, minicol = 0;//סעיף ב
	char arr[ROW][COL];
	printf("How many rows from the %d rows would you like to use?\n", ROW);
	scanf("%d", &minirow);
	while (minirow > ROW || minirow < 1)
	{
		printf("\nThe number is incorrect.\nPlease enter a new number in range of 0-%d:\n", ROW);
		scanf("%d", &minirow);
	}
	printf("How many columns from the %d columns would you like to use?\n", COL);
	scanf("%d", &minicol);
	while (minicol > COL || minicol < 1)
	{
		printf("\nThe number is incorrect.\nPlease enter a new number in range of 0-%d:\n", COL);
		scanf("%d", &minicol);
	}
	for (int i = 0; i < minirow; i++)
	{
		printf("Please enter an array of %d characters for line %d:\n", minicol, i + 1);
		for (int j = 0; j < minicol; j++)
		{
			fseek(stdin, 0, SEEK_END);
			scanf("%c", &arr[i][j]);
		}
	}
	char x = maxChar(arr, minirow, minicol);// סעיף ב
	printf("\nThe letter max char: %c\n", x);//סעיף ב

	system("pause");
}
