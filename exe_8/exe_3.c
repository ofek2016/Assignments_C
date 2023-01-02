#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 250

void encrypt(char str1[], char str2[], int idx)
{
	int i = 0;

	while(str1[i+idx]!='\0')
	{
		str2[i] = str1[i+idx+1];
		i++;
	}
	strcat(str2, str1);
	i = 0;
	while(i<2)
	{
		str2[strlen(str1) - i + 1] = 0;
		i++;
	}
	
}


void main()
{
	int idx = 0;
	char str1[SIZE]="JustDoIt";
	char str2[SIZE];
	printf("enter idx\n");
	scanf("%d", &idx);
	encrypt(str1, str2, idx);
	printf("%s\n", str2);
	system("pause");
}
