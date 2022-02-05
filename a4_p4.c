/*
CH-230-A
a4 p4.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
int count_consonants(char str[]);
int main()
{
    char str[100];
    //question defines the max space for array
ask_again:
    fgets(str, sizeof(str), stdin);
    if (str[0] == '\n')
    {
        return 0;
    }
    else
    {
        printf("Number of consonants=%d\n", count_consonants(str));
        goto ask_again;
        //this function allows to take input again and again
    }
    return 0;
}
int count_consonants(char str[])
{
    int consonants = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        //for both capital and small letters
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' ||
                str[i] == 'I' || str[i] == 'O' || str[i] == 'U')

            {
            }
            else
            {
                consonants++;
            }
        }
    }

    return consonants;
}