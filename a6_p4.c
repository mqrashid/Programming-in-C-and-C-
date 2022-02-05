/*
CH-230-A
a6 p4.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/

//Conditional compilation for showing intermediate results
#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE

int main()
{

    int *vector_x, *vector_y, *Inter_prod;
    int size, scaler_product;

    //Take the size value for the vectors below.
    scanf("%d", &size);

    //DMA for all vectors x and y
    vector_x = (int *)malloc(sizeof(int) * size);

    if (vector_x == NULL)
    {
        printf("Memory could not be allocated");
        exit(1);
    }

    vector_y = (int *)malloc(sizeof(int) * size);

    if (vector_y == NULL)
    {

        printf("Memory could not be allocated");
        exit(1);
    }
    //intermediate product of x and y vectors
    Inter_prod = (int *)malloc(sizeof(int) * size);

    if (Inter_prod == NULL)
    {

        printf("Memory could not be allocated");
        exit(1);
    }

    //taking values from user for vector x
    for (int i = 0; i < size; i++)
    {

        scanf("%d", &vector_x[i]);
    }

    //taking values from user for vector x
    for (int i = 0; i < size; i++)
    {

        scanf("%d", &vector_y[i]);
    }

    int idx = 0;
    while (idx < size)
    {
        Inter_prod[idx] = vector_x[idx] * vector_y[idx];
        scaler_product = scaler_product + Inter_prod[idx];
        idx++;
    }

//If intermediate value is mathematically defined, it prints
#ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", Inter_prod[i]);
    }

//Else only print scaler product
#else
    printf("INTERMEDIATE not defined\n");

#endif
    printf("The scalar product is: %d\n", scaler_product);

    return 0;
}