#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

long getMiddleMult(long num)
{
	int count = 0;
	long sum =1;
	while (num)
	{
		count++;
		num /= 10;
	}
	if (count % 2 == 0)
	{
		count /= 2;
		while (count)
		{
			sum *= 10;
			count--;
		}
		return sum;
	}
	else
	{
		count /= 2;
		while (count )
		{
			sum *= 10;
			count--;
		}
		return sum * 10;

	}
}

	void main()
	{
		long num;
		printf("insert number :");
		scanf("%ld", &num);
		num = getMiddleMult(num);
		printf("%ld\n", num);
		system("pause");
	}
