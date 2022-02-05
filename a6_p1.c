/*
CH-230-A
a6 p1.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/

#include <stdio.h>
#define SWAP(n1, n2)  \
    {                 \
        n1 = n1 + n2; \
        n2 = n1 - n2; \
        n1 = n1 - n2; \
    }

int main()
{
    int n1, n2;
    //enter any two numbers to swap:
    scanf("%d%d", &n1, &n2);

    double x, y;
    //printf("enter any two numbers to swap:");
    scanf("%lf%lf", &x, &y);
    // declaring and printing two floats from user//

    SWAP(n1, n2);
    SWAP(x, y);

    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%.6lf\n", x);
    printf("%.6lf\n", y);
    // printing the numbers after swapping //

    return 0;
}
