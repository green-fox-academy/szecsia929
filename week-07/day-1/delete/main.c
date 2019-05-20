#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int data;
    struct list *next;
} list;

void insert_at_the_end(list *head, int value);

list *delete(list *head);

int main()
{
    list *head = (list *) malloc(sizeof(list));
    head->data = 0;
    head->next = NULL;

    insert_at_the_end(head, 1);
    insert_at_the_end(head, 2);
    insert_at_the_end(head, 3);

    for (list *it = head; it != NULL; it = it->next) {
        printf("%d\n", it->data);
    }

    printf("----------------------------------\n");
    head = delete(head);

    for (list *it = head; it != NULL; it = it->next) {
        printf("%d\n", it->data);
    }

    for (list *it = head; it != NULL; it = it->next) {
        free(it);
    }

    return 0;
}

void insert_at_the_end(list *head, int value)
{
    list *newNode = (list *) malloc(sizeof(list));
    newNode->data = value;
    newNode->next = NULL;

    list *it = head;

    while (it->next != NULL) {
        it = it->next;
    }

    it->next = newNode;
}

list *delete(list *head)
{
    list *newHead = head->next;
    free(head);
    head = NULL;
    return newHead;
}