#include<stdio.h>

void main()
{
	int num, max=0,count=0;
	printf("insert positive number\n");
	scanf_s("%d", &num);
	max = num % 10;
	
	while (num>0)
	{
		 
		 if (num / 10 % 10 < max &&num / 10 % 10 != max)
		 {

			 max = num/10%10;
				 num = num / 10;
				 count++;
			 
		 }

		else
		{
			 num = 0;
			 count = 0;
		}
	
	}
	if (count != 0)
	{
		printf("ascrnd very\n");
	}
	else
	{
		printf("not ascrnd very\n");
	}

	system("pause");

}
