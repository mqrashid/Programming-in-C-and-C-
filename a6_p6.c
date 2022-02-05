/*
CH-230-A
a6 p6.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/

//Binary representation
#include <stdio.h>

int main()
{
    unsigned char ch;
    //taking user input
    scanf("%c", &ch);

    printf("The decimal representation is: %d\n", ch);
    printf("The binary representation is: ");

    // set bit_mask to highest possible number in binary
    int bit_mask = 128;

    // loop to print binary form
    while (bit_mask > 0)
    {
        // compares binary of char with the bitmask
        if ((bit_mask & ch) == 0)
            printf("0");
        else
            printf("1");

        bit_mask = bit_mask >> 1;
    }
    printf("\n");

    return 0;
}
