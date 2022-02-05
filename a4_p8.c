/*
CH-230-A
a4 p8.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/

#include <stdio.h>
// Under the secondary diagonal of matrix
void print(int arr[30][30], int size);
void diagonal(int arr[30][30], int n)
{
    printf("Under the secondary diagonal:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j>n-1)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }
}
int main()
{
    int n, arr[30][30];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    print(arr, n);
    diagonal(arr, n);
    printf("\n");
    return 0;
}
void print(int arr[30][30], int size)
{
    printf("The entered matrix is:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}