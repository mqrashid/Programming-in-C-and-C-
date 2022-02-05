/*
CH-230-A
a4 p3.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
#include<string.h>

//declaring functions before main function
float geometric_mean(float arr[], int num);
float largestnumber(float arr[], int num);
float smallestnumber(float arr[], int num);
void display();

int main()
{
    float arr[15];
    float enter;
    int count = 0;
    int sum = 0;
    printf("Please enter float values:");
    for (int i = 0; i < 15; i++)
    //using loop to take 15 inputs from keyboard
    {
        scanf("%f", &enter);
        if (enter >= 0)
        {
            count++;
            arr[i] = enter;
        }
        else
        {
            break;
        }
    }
    display();
    char c;
    scanf(" %c", &c);
    //taking user input to use operations
    getchar();
    switch (c)
    {
    case 'm':
    {
        printf("Geometric Mean of Array= %f\n", geometric_mean(arr, count));

        break;
    }
    case 'h':
    {
        printf("Largest number of Array= %f\n", largestnumber(arr, count));

        break;
    }
    case 'l':
    {
        printf("Smallest number of Array= %f\n", smallestnumber(arr, count));
        break;
    }
    case 's':
    {
        for (int i = 0; i < count; i++)
        {
             double sum = sum + arr[i];
            //sum of all the floats in the array
        }
        printf("Sum of all floats of array= %d\n",sum);
        break;
    }
    default:
    {
        printf("User input was not valid\n");
        break;
    }
    }

    return 0;
}
void display()
{
    printf("Enter m to calculate geometric mean\n");
    printf("Enter h to print highest number\n");
    printf("Enter l to print smallest number\n");
    printf("Enter s to calculate sum\n");
}
float geometric_mean(float arr[], int num)
{
    float product = 1;
    float GM;
    for (int i = 0; i < num; i++)
    {
        product = product * arr[i];
    }
    //declaring GM as mathematial formulae
    GM = pow(product, (float)1 / num);
    return GM;
}
float largestnumber(float arr[], int num)
{
    float max = arr[0];
    //using traverse arrays
    for (int i = 1; i < num; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
float smallestnumber(float arr[], int num)
{
    float min = arr[0];
    //using traverse arrays

    for (int i = 1; i < num; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}