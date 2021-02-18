#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node* next;
}node;

int main(void)
{
    node* list = malloc(sizeof(node));
    if (list == NULL)
    {
        return 1;
    }

    node* n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->next = NULL;
    list = n;

    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list);
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    list->next = n;

    for (node* i = list; i != NULL; i = i->next)
    {
        printf("%i\n", i->number);
    }

    while (list != NULL)
    {
        node* tmp = list->next;
        free(list);
        list = tmp;
    }
}