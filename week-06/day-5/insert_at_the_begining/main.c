#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int value;
    struct list *next;
} list;

void insert_at_the_beginning(list *head, int value);

int main()
{
    list *head = (list *) malloc(sizeof(list));
    head->value = 0;
    head->next = NULL;

    insert_at_the_beginning(head, 1);
    insert_at_the_beginning(head, 2);
    insert_at_the_beginning(head, 3);

    list *it = head;
    for (; it->next != NULL; it = it->next) {
        printf("%d\n", it->value);
    }
    printf("%d\n", it->value);

    return 0;
}

void insert_at_the_beginning(list *head, int value)
{
    list *newNode = (list *) malloc(sizeof(list));
    newNode->value = value;
    list *buff = head->next;
    head->next = newNode;
    newNode->next = buff;
}