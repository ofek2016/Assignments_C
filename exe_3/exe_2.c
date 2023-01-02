
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int day, amount,newday=0;
	printf("please insert a number day in the week(1-7) and insert a number amount added:\n ");
	scanf("%d%d",&day,&amount);

	if (day < 1 && day>7)
	printf("error number not between (1-7)\n");
	
	newday =(day + amount);

	if (newday >= 1 && newday <= 7)
	{
		printf("day is:%d\n", newday);

	}
	else
	{

		if (newday > 7)
		{
			if (newday % 7 == 0)
				printf("day is :%d\n", day);
			else
			{
				printf("newday is : %d\n", newday % 7);
			}
		}
	}

	system("pause");
