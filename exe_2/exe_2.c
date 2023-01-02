#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int num, unity, ten, hund, thousand,total;
	printf("write down a number\n");
	scanf("%d", &num);
	unity = num %10;
	ten = num / 10 % 10;
	hund = num / 100 % 10;
	thousand = num / 1000;
	total = unity + ten + hund + thousand;
	printf("total numbers  %d\n",total);
	printf("new number %d\n",unity*100+ten*1000+hund*10+thousand );
	float average;
	average = (float)total / 4;
	printf("average %f\n", average);

	system("pause");


}
