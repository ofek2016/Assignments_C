#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int base, num, validator, ans;

int convertBase(base, num)
{
	int i = 0, temp, ans = 0, counter = 0, power = 1;
	for (i = num; i > 0; i /= 10)
	{
		temp = i % 10;
		ans += temp * power;
		power *= base;
	}
	return ans;
}

int valid_base_check(base, num)
{
	for (; num > 0; num /= 10)
	{
		int temp = num % 10;

		if (temp >= base)
		{
			return validator = 0;
		}
		else {
			continue;
		}
	}
	return validator = 1;
}

void main()
{
	printf("please enter a BASE:\n");
	scanf("%d", &base);
	printf("please enter a NUMBER:\n");
	scanf("%d", &num);

	int validator = valid_base_check(base, num);

	if (validator == 1)
	{
		int ans = convertBase(base, num);
		printf("\nthe number you entered is %d in base 10\n\n", ans);
	}
	else
	{
		printf("invalid.\nnum is NOT coordinated with base.\n");
	}

	system("pause");
}
