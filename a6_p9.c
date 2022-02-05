/*
CH-230-A
a6 p9.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/

//An enhanced linked list
#include <stdio.h>
#include <stdlib.h>
struct list
{
    int data;
    struct list *ptr;
};

struct list *position_fix(struct list *my_list, int position, int value)
{
    struct list *cursor;
    cursor = my_list;
    int count;
    while (cursor != NULL && count < position)
    {
        cursor = cursor->ptr;
        count = count + 1;
    }
    if (position < 0 || position > count)
    {
        printf("Invalid position!\n");
        return my_list;
    }
    else
    {
        struct list *new_list;
        //Dynamic allocation of memory
        new_list = (struct list *)malloc(sizeof(struct list));
        if (new_list == NULL)
        {
            printf(" Error allocating memory \n");
            return my_list;
        }
        cursor = my_list;
        for (int i = 0; i < (position - 1); i++)
        {
            cursor = cursor->ptr;
        }
        new_list->data = value;
        new_list->ptr = cursor->ptr;
        cursor->ptr = new_list;
        return my_list;
    }
}

struct list *reverse(struct list *my_list)
{
    struct list *prev = NULL;
    struct list *cursor = my_list;
    struct list *ahead = NULL;
    while (cursor != NULL)
    {
        ahead = cursor->ptr;
        cursor->ptr = prev;
        prev = cursor;
        cursor = ahead;
    }
    return prev;
}

struct list *remov(struct list *my_list)
{
    if (my_list == NULL)
    {
        return my_list;
    }
    my_list->data = 0;
    return my_list->ptr;
}

struct list *forward_mov(struct list *my_list, int value)
{
    struct list *new_line;
    //Dynamic Allocation in Memory
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

struct list *backward_mov(struct list *my_list, int value)
{
    struct list *cursor, *new_line;
    cursor = my_list;
    //dynamic memory allocation is done
    new_line = (struct list *)malloc(sizeof(struct list));
    if (new_line == NULL)
    {
        printf(" Error allocating memory \n");
        return my_list;
    }
    new_line->data = value;
    new_line->ptr = NULL;
    if (my_list == NULL)
        return my_list;
    while (cursor->ptr != NULL)
    {
        cursor = cursor->ptr;
    }
    cursor->ptr = new_line;
    return my_list;
}

void list_printing(struct list *my_list)
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
    struct list *nextelement;
    while (my_list != NULL)
    {
        nextelement = my_list->ptr;
        free(my_list);
        my_list = nextelement;
    }
}

//main driver function
int main()
{
    char c;
    int a, b, x, y;
    //variables are declared
    struct list *linkedlist = NULL;
    do
    {
        scanf("%c", &c);
        //user input is taken from keyboard
        //switch statements for linkedlists
        switch (c)
        {
        case 'a':
            scanf("%d", &a);
            linkedlist = backward_mov(linkedlist, a);
            break;
        case 'b':
            scanf("%d", &b);
            linkedlist = forward_mov(linkedlist, b);
            break;
        case 'r':
            linkedlist = remov(linkedlist);
            break;
        case 'i':
            scanf("%d", &x);
            scanf("%d", &y);
            //user input required
            linkedlist = position_fix(linkedlist, x, y);
            break;
        case 'p':
            list_printing(linkedlist);
            break;
        case 'q':
            freelist(linkedlist);
            break;
        case 'R':
            linkedlist = reverse(linkedlist);
            break;
        default:
            break;
        }

    }

    while (c != 'q');
    //loop will always be implemented for once atleast

    return 0;
}