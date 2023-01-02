#include<stdio.h>

void main()
{
	int num,num2;
	char ch;
	
	
	printf("inser  2 number and char (%,/,*,-,+):");
	scanf_s("%d%d %c", &num,&num2,&ch);
	
	switch (ch)
	{
	case '%':	
    printf("%d\n",(num%num2)); break;
	case '/': 
	printf("%f\n", ((float)num/ num2)); break;
	case '*':
	printf("%d\n", (num * num2)); break;
	case '-':
	printf("%d\n", (num - num2)); break;
	case '+':
	printf("%d\n", (num + num2)); break;
	default:
		printf("error not cher proper only (%,/,*,-,+) ");

		
	}

	system("pause");


