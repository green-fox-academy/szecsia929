#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int data;
    struct list *next;
} list;

int empty(list *head);

int main()
{
    list *head = (list *) malloc(sizeof(list));
    head->next = NULL;
    printf("%d\n", empty(head));
    list *first = (list *) malloc(sizeof(list));
    head->next = first;
    printf("%d\n", empty(head));
    free(head);
    head = NULL;
    free(first);
    first = NULL;
    return 0;
}

int empty(list *head)
{
    return (head->next == NULL) ? 1 : 0;
}