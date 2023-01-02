#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#define LEN 2
#define SIZE 3
int *getPrimeArr(int **arr, int rows, int cols, int *psize);
int isPrime(int num);
void main()
{
    int size = 0;
    int *psize = &size;
    int *arr[LEN];
    for (int i = 0; i < LEN; i++)
    {
        *(arr + i) = (int *)malloc(SIZE * sizeof(int));
    }
    for (int i = 0; i < LEN; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("Enter a num for arr[%d][%d]: ", i, j);
            scanf("%d", *(arr + i) + j);
        }
    }
    int *location = getPrimeArr(arr, LEN, SIZE, psize);
    printf("\nThe prime numbers are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(location + i));
    }
    printf("\n\n");
    free(location);
    system("pause");
}

int *getPrimeArr(int **arr, int rows, int cols, int *psize)
{
    int k = 0, ans = 0;
    int *address = NULL;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int temp = isPrime(*(*(arr + i) + j));
            ans += temp;
        }
        *psize = ans;
    }
    address = (int *)malloc(ans * sizeof(int));
    if (address == NULL)
    {
        printf("Out of memory\n");
        system("pause");
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int temp = isPrime(*(*(arr + i) + j));
            if (temp == 1)
            {
                *(address + k) = *(*(arr + i) + j);
                k++;
            }
        }
    }
    return address;
}

int isPrime(int num)
{
    if (num == 2 || num == 3)
        return 1;
    if (num == 1 || num == 0 || num % 2 == 0)
        return 0;
    else
    {
        for (int t = 3; t < num; t += 2)
        {
            if (num % t == 0)
                return 0;
            else
                return 1;
        }
    }
}
