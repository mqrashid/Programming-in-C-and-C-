/*
CH-230-A
a6 p2.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/

#include <stdio.h>
#define LEASTSIGNIFANT_BIT(c) \
    {                         \
        if ((c & 1) == 1)     \
            printf("1\n");    \
        else                  \
            printf("0\n");    \
    }

//Determine the least significant bit

int main()
{
    unsigned char ch;
    //user input from keyboard
    scanf("%c", &ch);
    //printing decimal representation along significant bit
    printf("The decimal representation is: %d\n", ch);
    printf("The least significant bit is:");
    //macro called in main
    LEASTSIGNIFANT_BIT(ch);

    return 0;
}
