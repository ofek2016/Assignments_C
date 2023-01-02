#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void  removeDigits(char* str)
{
	int a = 2, i = 0;
	while (a)
	{
		while (*(str + i))
		{
			if (*(str + i) >= '0' && *(str + i) <= '9') 
				for (int j = 0; *(str + i + j) != '\0'; j++)
				{
					*(str + i + j) = *(str + i + j + 1);
				}
			if (*(str + i + 1) == ' ' && *(str + i) == ' ') 
				for (int j = 0; j < *(str + i + j) != '\0'; j++)
				{
					*(str + i + j) = *(str + i + j + 1);
				}
			if (*(str) == ' ')
				for (int j = 0; *(str + i + j) != '\0'; j++) 
				{
					*(str + i + j) = *(str + i + j + 1);
				}
			i++;
		}
		i = 0;
		a--;
	}


}

void main()
{

	char str[] = "Today I had 3 apples and 2 bananas1!";
	char *ptrStr = str;
	removeDigits(ptrStr);
	printf("%s\n", str);
	system("pause");

}
