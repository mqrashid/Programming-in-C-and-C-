/*
CH-230-A
a6 p5.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/
//backward Binary Represtation
#include <stdio.h>
int main()
{
    unsigned char c;
    scanf("%c", &c);
    //taking value of c from user
    printf("The decimal representation is: %d\n", c);
    //prints the decimal representation for the char
    printf("The backwards binary representation is: ");
    //prints the backwards binary representation for the char
    int i = 0;
    while ((1 << i) <= c)
    {
        if ((c >> i) & 1) //c=c>>1 and c&1
            printf("1");
        else
            printf("0");
        i = i + 1;
    }
    printf("\n");
    return 0;
}