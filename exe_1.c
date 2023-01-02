// פונקציות של רקורסיות
#define _CRT_SECVRE_NO_WARNINGS
#include <stdio.h>

double pow(int base, double power)
{

	if (power == 0)
		return 1;
	return pow(base, power - 1) * base;
}

int sum(int n)
{
	if (n == 0)
		return 0;
	return sum(n - 1) + n;
}
// מבסיס קטן מ10 לעשרוני בסיס 10

int toDecimal(int number, int base)
{
	if (!(number))
		return 0;
	return (number % 10 + base * toDecimal((number / 10), base));
}
// מעשרוני ל(בינארי-2 ,אוקטלי-8) או מספר הבסיס קטן מ10
int tob(int number, int base)
{
	if (!(number))
		return 0;
	return (number % base + 10 * tob(number / base, base));
}