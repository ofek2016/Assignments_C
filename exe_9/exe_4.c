#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int amount(char *str1, char *str2, int len1, int len2)
{
	int i = 0, j = 0, count = 0, s = 0;
	while (i < len1)
	{
		if (*(str1 + i) != *(str2 + j))
		{
			i++;
			s = 0;
			j = 0;
		}
		else
		{
			j++;
			i++;
			s++;
		}
		if (s == len2)
		{
			count++;
			s = 0;
			i++, j = 0;
		}
	}
	if (i >= len1) 
	return count;
}

void main()
{
	char str1[] = " 1,2,3,4,5,2,3"; 
	char str2[] = "2,3"; 
	char *ptrStr1 = str1;
	char *ptrStr2 = str2;
	int len2 = strlen(ptrStr2);
	int len1 = strlen(ptrStr1);
	int a = amount(ptrStr1, ptrStr2, len1, len2);
	printf("amount:%d\n", a);
	system("pause");
}