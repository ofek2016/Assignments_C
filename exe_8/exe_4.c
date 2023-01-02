#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int Encoding(char str1[], char str2[])
{
	int i = 0, j = 0,count=0,c=0;

	while (str2[j] != '\0')
	{
		j++;

	}
	while (str1[i]!='\0')
	{
		c = 0;
		 
		while (str2[c]!='\0')
		{
		if (str1[i] == str2[c])
		{
			str1[i] = '*';
			count++;
			c++;
			i++;
		}
		else
		{
         break;
		}
       
		
		}
		i++;
	}

	return(count / j);

}



void main()
{
	int x = 0;
	char str1[] = "The 2017-18 North Korea crisis was a period of heightened tension between North Korea and the United States";
	char str2[] = "Korea";

	x = Encoding(str1, str2);
	printf("how often does the encryption word appears: %d\n", x);
	printf("new string:%s\n", str1);


	system("pause");

}