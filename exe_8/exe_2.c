#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int strSuperCmp(char str1[],char str2[], int firstIdx, int secondIdx,int compare)
{
	int i = 0, j = 0,fidx=0,sidx=0;
	while (str1[i]!= '\0')
	{
		if (str1[i] >= 'A' && str1[i] <= 'Z')
			str1[i] += 32;
		i++;

	}
	while (str2[j] != '\0')
	{
		if (str2[j] >= 'A' && str2[j] <= 'Z')
			str2[j] += 32;
		j++;

	}


	while (compare !=0)
	{   
		if (str1[firstIdx] != str2[secondIdx])
		{
		if (str1[firstIdx]>str2[secondIdx] )
		{
			return str2[secondIdx]-str1[firstIdx];
			
		}
		if (str1[firstIdx] < str2[secondIdx])
		{
			return str2[secondIdx]- str1[firstIdx];
			
		}

		}
		compare--;
		firstIdx++;
		secondIdx++;
	}
	return 0;
	
}



void main()
{
	int difference=0, firstIdx=0, secondIdx=0, compare=0;
	char str1[]="She sells sea-shElls";
	char str2[]="on the Sea-shore.";



	printf("index the start of a comparison in the first string\n");
	scanf("%d",&firstIdx);
	printf("index the start of a comparison in the second string\n");
	scanf("%d",&secondIdx);
	printf("enter a comparison amount\n");
	scanf("%d",&compare);
	difference = strSuperCmp(str1, str2, firstIdx, secondIdx, compare);
	printf("difference=%d\n", difference);
	system("pause");
}
