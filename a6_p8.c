/*
CH-230-A
a6 p8.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/

//A linked list
#include <stdio.h>
#include <stdlib.h>
//making a linked list
struct list
{
    int data;
    struct list *ptr;
};

struct list *removal(struct list *my_list)
{
    if (my_list == NULL)
    {
        return my_list;
    }
    my_list->data = 0;
    return my_list->ptr;
}

struct list *forward_push(struct list *my_list, int value)
{
    struct list *new_line;
    //Dynamic Memory Allocation
    new_line = (struct list *)malloc(sizeof(struct list));
    if (new_line == NULL)
    {
        printf(" Error allocating memory \n");
        return my_list;
    }
    new_line->data = value;
    new_line->ptr = my_list;
    return new_line;
}

struct list *backward_push(struct list *my_list, int value)
{
    struct list *cursor, *new_line;
    cursor = my_list;
    //Dynamic Memory Allocation
    new_line = (struct list *)malloc(sizeof(struct list));
    if (new_line == NULL)
    {
        printf(" Error allocating memory \n");
        return my_list;
    }
    new_line->data = value;
    new_line->ptr = NULL;
    if (my_list == NULL)
        return new_line;
    while (cursor->ptr != NULL)
    {
        cursor = cursor->ptr;
    }
    cursor->ptr = new_line;
    return my_list;
}

void printing_list(struct list *my_list)
{
    struct list *p;
    for (p = my_list; p != NULL; p = p->ptr)
    {
        printf("%d ", p->data);
    }
    printf("\n");
}

void freelist(struct list *my_list)
{
    struct list *next_element;
    while (my_list != NULL)
    {
        next_element = my_list->ptr;
        free(my_list);
        my_list = next_element;
    }
}

//main driver function
int main()
{
    char c;
    int a, b;
    struct list *linkedlist = NULL;
    do
    {
        scanf("%c", &c);
        //taking user input for the character
        switch (c)
        {
        case 'a':
            scanf("%d", &a);
            linkedlist = backward_push(linkedlist, a);
            break;
        case 'b':
            scanf("%d", &b);
            linkedlist = forward_push(linkedlist, b);
            break;
        case 'r':
            linkedlist = removal(linkedlist);
            break;
        case 'p':
            printing_list(linkedlist);
            break;
        case 'q':
            freelist(linkedlist);
        default:
            break;
        }

    } while (c != 'q');
    //loop will be atleast implemented for once
    return 0;
}