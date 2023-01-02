#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <string.h>
void setArray3(char *str1, char *str2, char *str3)
{
    int i = 0, j = 0, x = 0, y = 1;
    while (*str1 != '\0')
    {
        while (*str2 != '\0')
        {
            if (*(str1 + i) == *(str2 + j))
            {
                *(str3 + x) = *(str1 + i);
                *(str3 + x + 1) = *(str1 + i);
                x++;
                break;
            }
            j++;
            if (j == strlen(str2))
            {
                *(str3 + x) = *(str1 + i);
                break;
            }
        }
        j = 0, i++, x++;
        if (i == strlen(str1))
        {
            *(str3 + x) = '\0';
            break;
        }
    }
}

void main()
{
    char *str1 = "hello world";
    char *str2 = "l";
    char str3[100];
    setArray3(str1, str2, str3);
    printf("The new string is: \n");
    puts(str3);
    system("pause");
}