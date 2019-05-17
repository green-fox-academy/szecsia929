#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int value;
    struct list *next;
} list;

void insert_after(list *head, int value, list *insertAfterThis);

int main()
{
    list *head = (list *) malloc(sizeof(list));
    head->value = 0;
    list first;
    first.value = 1;
    list second;
    second.value = 2;
    list thirdAliasAfterThis;
    thirdAliasAfterThis.value = 3;
    list last;
    last.value = 4;
    head->next = &first;
    first.next = &second;
    second.next = &thirdAliasAfterThis;
    thirdAliasAfterThis.next = &last;
    last.next = NULL;

    list *it = head;
    for (; it->next != NULL; it = it->next) {
        printf("%d\n", it->value);
    }
    printf("%d\n", it->value);

    insert_after(head, 999, &thirdAliasAfterThis);
    printf("--------------------------------------\n");

    it = head;
    for (; it->next != NULL; it = it->next) {
        printf("%d\n", it->value);
    }
    printf("%d\n", it->value);
    return 0;
}

void insert_after(list *head, int value, list *insertAfterThis)
{
    list *newNode = (list *) malloc(sizeof(list));
    newNode->value = value;
    list buff;
    buff.next = insertAfterThis->next;
    insertAfterThis->next = newNode;
    newNode->next = buff.next;
}