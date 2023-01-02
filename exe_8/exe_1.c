#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 250

void myStrcpy(char str1[], char str2[])
{
	int i = 0;

	while (str1[i]!= '\0')
	{
		str2[i]=str1[i];
		i++;

	}


}

void main()
{

	char str1[SIZE];
	char str2[SIZE];
	printf("enter two words the same size of letters\n");
	scanf("%s", str1);
	scanf("%s", str2);
    myStrcpy(str1, str2);
	printf(" str2 new :%s\n ", str2);
	
	system("pause");

}
