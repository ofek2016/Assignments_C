#include<stdio.h>

void main()
{
	int num, i, j;
	char ch;
	printf("please enter a number and cher :");
	scanf_s("%d", &num);
	scanf_s(" %c", &ch);
	char tv = ' ';
	for ( i = 1; i <=num; i++)
	{
		printf("\n");
		for (int u = 0; u < num-i; u++)
		{
			printf("%c", tv);

		}		for (j = 1; j <= i; j++)
		{
			printf("%c", ch);	
		}
		
		
	}
	printf("\n");
	system("pause");


}
