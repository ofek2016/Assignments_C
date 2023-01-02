#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{

	int num, mini;
	printf("insert a number five digit:  ");
	scanf("%d", &num);
	mini = num % 10;
	if (num / 10 % 10 < mini)
		mini = num / 10 % 10;
	if (num / 100 % 10 < mini)
		mini = num / 100 % 10;
	if (num / 1000 % 10 < mini)
		mini = num / 1000 % 10;
	if (num/10000 < mini)
		mini = num / 10000;
	printf("mini digit: %d\n", mini);
	system("pause");



}
