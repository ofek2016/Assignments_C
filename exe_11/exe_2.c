#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 50
char *getName();
char *changeName(char *add1, char *add2, int opti);
void printMenu();

void main()
{
    int opt = 0;

    printf("Please enter first partner first and last name seperated by space: ");
    char *address1 = getName();
    printf("Please enter second partner first and last name seperated by space: ");
    char *address2 = getName();

    printMenu();
    printf("\nYour selection is: ");
    scanf("%d", &opt);
    printf("\n");

    char *location = changeName(address1, address2, opt);

    system("pause");
}

char *changeName(char *add1, char *add2, int opti)
{
    char *temp = NULL;
    int a = 0, first_first = 0, first_last = 0, second_first = 0, second_last = 0;
    int size1 = strlen(add1);
    int size2 = strlen(add2);
    while (opti > 5 || opti < 1)
    {
        printf("Error");
        system("pause");
    }
    for (first_first = 0; *(add1 + first_first) != ' '; first_first++)
        ;
    for (first_last = 0; *(add1 + size1) != ' '; first_last++, size1--)
        ;
    for (second_first = 0; *(add2 + second_first) != ' '; second_first++)
        ;
    for (second_last = 0; *(add2 + size2) != ' '; second_last++, size2--)
        ;
    size1 = strlen(add1);
    size2 = strlen(add2);
    printf("Alright, it will take just a moment...\nYour name before changing was:\n1. %s\n2. %s\n\n", add1, add2);

    switch (opti)
    {

    case 1:
        temp = (char *)malloc((first_first + second_last) * sizeof(char));
        if (!temp)
        {
            printf("Error");
            system("pause");
        }
        for (int t = 0; t < first_first; t++)
        {
            *(temp + t) = *(add1 + t);
        }
        for (int t = 0; t <= second_last; t++)
        {
            *(temp + t + first_first) = *(add2 + second_first + t);
        }
        printf("Your new names are:\n1. %s\n2. %s\n\nSee you next time!\n", temp, add2);
        return temp;

    case 2:
        temp = (char *)malloc((first_first + first_last + second_last) * sizeof(char));
        if (!temp)
        {
            printf("Error");
            system("pause");
        }
        strcpy(temp, add1);
        for (int t = 0; t <= second_last; t++)
        {
            *(temp + size1 + t) = *(add2 + second_first + t);
        }
        printf("Your new names are:\n1. %s\n2. %s\n\nSee you next time!\n", temp, add2);
        return temp;

    case 3:
        temp = (char *)malloc((second_first + first_last) * sizeof(char));
        if (!temp)
        {
            printf("Error");
            system("pause");
        }
        for (int t = 0; t < second_first; t++)
        {
            *(temp + t) = *(add2 + t);
        }
        for (int t = 0; t <= first_last; t++)
        {
            *(temp + t + second_first) = *(add1 + first_first + t);
        }
        printf("Your new names are:\n1. %s\n2. %s\n\nSee you next time!\n", add1, temp);
        return temp;

    case 4:
        temp = (char *)malloc((second_first + second_last + first_last) * sizeof(char));
        if (!temp)
        {
            printf("Error");
            system("pause");
        }
        strcpy(temp, add2);
        for (int t = 0; t <= first_last; t++)
        {
            *(temp + size2 + t) = *(add1 + first_first + t);
        }
        printf("Your new names are:\n1. %s\n2. %s\n\nSee you next time!\n", add1, temp);
        return temp;

    case 5:
        printf("No names change accoured. Your names are still: \n1. %s\n2. %s\n\n", add1, add2);
        printf("See you next time!\n");
        return NULL;
    }
}

char *getName()
{
    char str[SIZE] = "\0";
    gets(str);
    int size = strlen(str);

    int *newstr = (char *)malloc(strlen(str) * sizeof(char));
    if (!newstr)
    {
        printf("Not enough memory");
        system("pause");
    }
    strcpy(newstr, str);
    return newstr;
}

void printMenu()
{
    printf("\nPlease select one of the folowing options [1-5]: \n");
    printf("1 - Change first partner's last name to second partner's last name.\n");
    printf("2 - Add second partner's last name to first partner's full name.\n");
    printf("3 - Change second partner's last name to first partner's last name.\n");
    printf("4 - Add first partner's last name to second partner's full name.\n");
    printf("5 - Decide Later.\n");
}
