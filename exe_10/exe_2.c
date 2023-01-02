#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <string.h>
#define SIZE 5
int findPisga(int *arr, int *pointarr[], int size)
{
    int a = 0, j = 0;
    for (int i = 0; i <= SIZE - 1; i++)
    {
        if (i == 0)
        {
            if (arr[i] > arr[i + 1])
            {
                pointarr[j] = &arr[i];
                j++;
                a++;
            }
        }
        if (i > 0 && i < SIZE - 1)
        {
            for (i; i < SIZE - 1; i++)
            {
                if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
                {
                    pointarr[j] = &arr[i];
                    j++;
                    a++;
                }
            }
        }
        if (i == SIZE - 1)
        {
            if (arr[i] > arr[i - 1])
            {
                pointarr[j] = &arr[i];
                a++;
                j++;
            }
        }
    }
    return a;
}
void main()
{
    int arr[] = {7, 2, 5, 9, 4};
    int *pointarr[SIZE];
    int size = findPisga(arr, pointarr, SIZE);
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d \n", i, *(*(pointarr + i)));
    }
    system("pause");
}