#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define IS_KAPREKAR 1
#define IS_Not_Karpenkar 0

long square, num;
int digits;

long getMiddleMult(power)
{
	int count = 0;
	int ans = 1;

	while (power > 0)
	{
		count++;
		power = power / 10;
	}
	if (count % 2 == 0)
	{
		for (int i = count / 2; i > 0; i--) {
			ans *= 10;
		}
	
	}
	else {
		if (count % 2 != 0)
		{
			for (int i = (count / 2) + 1; i > 0; i--) {
				ans *= 10;
			}
	
		}
	}
	return ans;
}

long isKaprekar(power_ans, power, user_input)
{
	long temp1 = power / power_ans;
	long temp2 = power % power_ans;

	long checker = temp1 + temp2;

	if (checker == user_input)
	{
		checker = IS_KAPREKAR;
		
	}
	else {
		checker = IS_Not_Karpenkar;
	}
	return checker;
}

void main()
{
	long user_input;
	printf("please enter a number:\n");
	scanf("%d", &user_input);

	long power = user_input * user_input;

	int power_ans = getMiddleMult(power); 

	int checker_val = isKaprekar(power_ans, power, user_input); 

	if (checker_val == 1)
	{
		printf("the number is kaprekar number.\n");
	}
	else {
		printf("the number is not kaprenkar number.\n");
	}

	system("pause");
}
