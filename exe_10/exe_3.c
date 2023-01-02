#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <string.h>

void returnstrung(char *str, char let, int *profit)
{
    int i = 0, index = 0, count = 0, t = 0, s = 0;
    for (i = 0; i <= strlen(str); i++)
    {
        if (*(str + i) == let)
            count++;
        else if (*(str + i) == ' ')
        {
            if (count > t)
            {
                t = count, index = i - s;
            }
            count = 0;
            s = 0;
            continue;
        }
        else if (*(str + i) == '\0')
        {
            if (count > t)
                t = count, index = i - s;
            continue;
        }
        s++;
    }
    for (int k = 0; k < s; k++)
    {
        printf("%c", str[index + k]);
    }
}
void main()
{
    int i = 0;
    char str[200] = "aaba dfsa er";
    char let = 'a';
    int *profit = '\0';
    returnstrung(str, let, profit);
    printf("\n");
    system("pause");
}