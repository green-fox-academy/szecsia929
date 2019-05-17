#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int value;
    struct list *next;
} list;

void insert_at_the_end(list *head, int value);

int sizeOfList(list *head);

int main()
{
    list *head = (list *) malloc(sizeof(list));
    head->value = 0;
    head->next = NULL;
    for (int i = 0; i < 27; ++i) {
        insert_at_the_end(head, i + 1);
    }

    printf("List length: %d\n", sizeOfList(head));

    return 0;
}

void insert_at_the_end(list *head, int value)
{
    list *newNode = (list *) malloc(sizeof(list));
    newNode->value = value;
    newNode->next = NULL;

    list *it = head;

    while (it->next != NULL) {
        it = it->next;
    }

    it->next = newNode;
}

int sizeOfList(list *head)
{
    int counter = 0;
    list *it;
    it = head;
    while (it->next != 0) {
        counter++;
        it = it->next;
    }
    return counter;
}