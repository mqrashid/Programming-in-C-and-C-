/*
CH-230-A
a4 p12.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void replaceAll(char *str, char c, char e);
int main()
{
    char str[80];
    //80 is maximum space for the array
    char e, c;
    while(1){
    printf("Input: ");
    fgets(str, 80, stdin); // taking input
    //printf("%s\n", str);
    //this will end program if user enters "stop"
    if (strcmp(str, "stop\n") == 0)
    {
        exit(0);
    }

    printf("find char= ");
    //taking the user input for c 
    c=getchar();
    getchar();

    printf("replace char= ");
    //taking the user input for e
   e=getchar();
    getchar();

    //Calling function to perform operations
    replaceAll(str, c, e);
    printf("New string= %s\n", str);
    }
    return 0;
}

void replaceAll(char *str, char c, char e)

{
    //using this fucntion to replace c with e in loop
    for (int i = 0; i < 80; i++)
    {
        if (str[i] == c)
        {
            str[i] = e;
        }
    }
}