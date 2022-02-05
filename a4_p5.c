/*
CH-230-A
a4 p5.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
void pypart(int n, char ch)
{
    // Outer loop to handle number of rows
    // n in this case
    for (int i = n; i > 0; i--)
    {

        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j < i; j++)
        {

            // Printing stars
            printf("ch", ch);
        }

        // Ending line after each row
        printf("\n");
    }
}

// Driver Function
int main()
{
    int n;
    char ch;
    scanf("%d", &n);
    getchar();
    ch = getchar();
    pypart(n, ch);
    return 0;
}
