/*
CH-230-A
a6 p3.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/
//Determine the mid-range of three values
#include <stdio.h>

//defining macro for finding the maximum
#define MAX(a, b, c, max)              \
    {                                  \
        if ((a >= b) && (a >= c))      \
            max = a;                   \
        else if ((b >= a) && (b >= c)) \
            max = b;                   \
        else                           \
            max = c;                   \
    }
//defining macro for the finding the minimum
#define MIN(a, b, c, min)              \
    {                                  \
        if ((a <= b) && (a <= c))      \
            min = a;                   \
        else if ((b <= a) && (b <= c)) \
            min = b;                   \
        else                           \
            min = c;                   \
    }

//defining macro for finding the mid range
#define MID_RANGE(min, max, mid_range) \
    {                                  \
        mid_range = (min + max) / 2.0; \
        printf("%0.6f\n", mid_range);  \
    }
//0.6 for accuracry to 6 significant figures

//driver function
int main()
{
    //values are obtained from keyboard
    float a, b, c, min, max, mid_range;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("The mid-range is: ");
    //calling macros
    MIN(a, b, c, min);
    MAX(a, b, c, max);
    MID_RANGE(min, max, mid_range);

    return 0;
}
