/*
CH-230-A
a5 p1.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/

//Triangle Chars
#include <stdio.h>
#include <string.h>

void triangle_print(int n, char ch);

int main()
{
    int n;
    char ch;
    scanf("%d", &n);
    getchar();
    ch = getchar();
    triangle_print(n, ch);
    return 0;
}

void triangle_print(int n, char ch)
{

    //outerloop manages the rows
    for (int i = n; i > 0; i--)
    {

        //Innerloop manages the columns
        for (int j = 0; j < i; j++)
        {
            //User input char is printed
            printf("%c", ch);
        }
        //New line after printing
        printf("\n");
    }
}