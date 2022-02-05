//1

/*
CH-230-A
a5 p2.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

// Divide with constant data

void divby5(float arr[], int size);

int main()

{
    float arr[] = {5.50, 6.50, 7.75, 8.00, 9.60, 10.36};
    //array is given values
    int n = 6;
    //size of array is assigned
    printf("Before:\n");
    for (int i = 0; i < n; i++)
    {
        //loop used to print the array
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    divby5(arr, n);
    //function is called
    printf("After:\n");
    for (int i = 0; i < n; i++)
    {
        //loop for printing modified loop
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    return 0;
}

void divby5(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        //array is divided by 5
        arr[i] = arr[i] / 5.0;
    }
}