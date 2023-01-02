#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int hh1, mm1, hh2, mm2;

	printf("inert one times:");
	scanf("%d:%d", &hh1, &mm1);
	printf("inert two times:");
	scanf("%d:%d", &hh2, &mm2);
   

	int  difference1 = ((hh2 * 60 + mm2) - (hh1 * 60 + mm1));

	if (difference1 > 0)
	{
		printf("%d:%d\n", difference1 /60 , difference1%60);
	}
	else
	{
		printf("-%d:%d\n", difference1 /60, (difference1*-1)%60);
	}
	system("pause");
}
