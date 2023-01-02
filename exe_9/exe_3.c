#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void switchstring(char *str)
{
	int len = strlen(str);
	if (len % 2 != 0)
	{
		str[len - 1] = '\0';
	}
	
	for (int i = 0; *(str + i) != '\0'; i += 2)
	{
		char value = *(str + i);
		*(str + i) = *(str + i + 1);
		*(str + i + 1) = value;
	}

}
void main()
{
	char* ptrStr;
	char str[] = "abcdef";
	ptrStr = str;
	switchstring(ptrStr);
	printf(" new string: %s\n", str);
	system("pause");
}