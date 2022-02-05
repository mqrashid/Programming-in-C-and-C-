/*
CH-230-A
a4 p11.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int count_insensitive(char *str, char c);

int main()
{
    char *input = (char *)malloc(50 * sizeof(char));
    fgets(input, 50, stdin);
    //Input from user
    char *str = (char *)malloc(strlen(input) * sizeof(char));
    strcpy(str, input);
    char ch[] = {'b', 'H', '8', 'u', '$'};
    free(input);
    for (int i = 0; i < sizeof(ch); i++)
    {
        printf("The character '%c' occurs %d times\n", ch[i], count_insensitive(str, tolower(ch[i])));
    }

    return 0;
}
int count_insensitive(char *str, char c)
{
    int count = 0;
    char s;
    for (int i = 0; i < strlen(str); i++)
    {
        s = (unsigned char)str[i];
        if (tolower(s == c))
        {
            count++;
        }
    }

    return count;
}