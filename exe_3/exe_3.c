#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{

	int num,u,t,hund,to,teth;
	printf("insert a number five digit:  ");
	scanf("%d", &num);
	u = num % 10;//אחדות
	t = num / 10 % 10;//עשרות
	hund = num / 100 % 10;//מאות
	to = num / 1000 % 10;//אלפים
	teth = num / 10000;//עשרות אלפים
	if (u == teth && t == to)
		printf("the number  %d  is a palindrome\n", num);
	else
		printf("the number %d  is not a palindrome\n", num);
	
	system("pause");
}