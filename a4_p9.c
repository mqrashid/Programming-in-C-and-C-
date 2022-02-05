/*
CH-230-A
a4 p9.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
//Dynamic Array
int prodminmax(int arr[], int n);
int main()
{
    int n;
    printf("Please enter the size of the array:");
    scanf("%d", &n);
    //Array of size n is declared here
    int *arr = (int *)malloc(n * sizeof(int));
    //User input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int prod = prodminmax(arr, n);
    printf("Product of minimum and the maximum in array= %d\n", prod);
    return 0;
}

int prodminmax(int arr[], int n)
{
    int prod = 1, max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    //Product is here calculated
    prod = min * max;
    return prod;
}