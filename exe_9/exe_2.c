#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <string.h>
#define SIZE 250

void order(char *s1, char *s2, char *s3, int size1, int size2)
{
	int i = size1 - 1, j = size2 - 1, t = 0;
	while (i > 0 || j > 0)
	{
		
		if (*(s1 + i) == *(s2 + j))
		{
			*(s3 + t) = *(s2 + j);
			i--;
			j--;
		}
		else if (*(s1 + i) > *(s2 + j)) 
		{
			*(s3 + t) = *(s1 + i); i--;
		}
		else 
		{
			*(s3 + t) = *(s2 + j); j--;
		}
		t++;
		if (i == 0) 
			for (j; j >= 0; j--)
			{
				*(s3 + t) = *(s2 + j);
				t++;
			}
		if (j == 0) 
			for (i; i >= 0; i--)
			{
				*(s3 + t) = *(s1 + i);
				t++;
			}
	}
}

void main()
{
	char s1[] = "kpsder";
	char s2[] = "abcdegf";
	char s3[SIZE] = {0};
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	char *ptrS1 = s1;
	char *ptrS2 = s2;
	char *ptrS3 = s3;
	order(ptrS1, ptrS2, ptrS3, size1, size2);
	printf("%s\n", s3);
	system("pause");


}
