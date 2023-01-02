#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int num, binar, bytebinr, elef, mea, eser, ehad, ehades, eseres, meaes, elefes;
	printf("please enter a number(1-4 digits):");
	scanf("%d", &binar);
	printf("%d\n", binar);
	elef = binar / 1000;
	mea = binar / 100 % 10;
	eser = binar / 10 % 10;
	ehad = binar % 10;
	ehades = ehad * (1);
	eseres = eser * (2);
	meaes = mea * (4);
	elefes = elef * (8);
	num = ehades + eseres + meaes + elefes;
	printf("originl Number (%d)2", binar);
	printf("after format to byte  (%08d)2  =(%d)10 \n",binar,num);
	
	system("pause");
}

