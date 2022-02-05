/*
CH-230-A
a4 p6.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

//Dynamic Memory Allocation
void greatest_values(int arr[], int size)
{
    int i, j, var;
    //My array is sorted in ascending order
    for (i = 0; i < (size - 1); ++i)
    {
        for (j = 0; j < size - 1 - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                var = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = var;
            }
        }
        printf("first highest number in array= %d\n", arr[size - 1]);
        printf("second highest number in array= %d\n", arr[size - 2]);
    }
}
int main()
{
    int n; // size of array
    printf("Please enter the size for the array:");
    scanf("%d", &n);
    //Size is here declared
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //Function is called
    greatest_values(arr, n);
    return 0;
}
