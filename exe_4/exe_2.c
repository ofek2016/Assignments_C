#include<stdio.h>

void main()
{
	int num1=0, num2=0, sum1=0, sum2=0;
	printf("inser  2 number:");
	scanf_s("%d%d", &num1, &num2);

	int koko1 = num1;
	int koko2 = num2;
	
	while (num1 > 0)
	{
		sum1 += num1 % 10;
		num1 = num1 / 10;
		
	}

	while (num2 > 0)
	{


		sum2 += num2 % 10;
		num2 = num2 / 10;

	}

	(sum1 <= sum2) ? printf("%d\n",koko1) : 0;
	(sum2 < sum1) ? printf("%d\n", koko2) : 0;
	
	system("pause");
}
