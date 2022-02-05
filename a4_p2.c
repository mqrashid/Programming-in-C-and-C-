/*
CH-230-A
a4 p2.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[50];
    //decleration of string as series of characters
    fgets(str_1, 50, stdin);
    //taking user input
    for (int i = 0; i < (strlen(str_1) - 1); i++)
    {
        if (i % 2 == 0)
        //if remainder equals 0 it will print
        {
            printf("%c\n", str_1[i]);
        }
        else
        //otherwise it will zig zag
        {
            printf(" %c\n", str_1[i]);
        }
    }

    return 0;
}