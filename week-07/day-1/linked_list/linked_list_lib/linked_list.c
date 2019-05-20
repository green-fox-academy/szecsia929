//
// Created by user on 2019. 05. 20..
//

#include "linked_list.h"

void insertAtTheEnd(list *head, int data)
{
    list *newNode = (list *) malloc(sizeof(list));
    newNode->data = data;
    newNode->next = NULL;
    list *temp = head;
    for (list *it = head; it != NULL; it = it->next) {
        temp = it;
    }
    temp->next = newNode;

}

void insertAtTheBeginning(list *head, int data)
{
    list *newNode = (list *) malloc(sizeof(list));
    newNode->data = data;
    list *buff = head->next;
    head->next = newNode;
    newNode->next = buff;
}

void insertAfter(list *head, list *node, int data)
{
    for (list *it = head; it != NULL; it = it->next) {
        if (it == node) {
            list *newNode = (list *) malloc(sizeof(list));
            newNode->data = data;
            list *buff = it;
            it->next = newNode;
            newNode->next = buff;
        }
    }
}

int size(list *head)
{
    int counter = 0;
    for (list *it = head; it != NULL; it = it->next) {
        counter++;
    }
    return counter;
}

int empty(list *head)
{
    return (head->next == NULL) ? 1 : 0;
}

list *delete(list *head)
{
    list *newHead = head->next;
    free(head);
    return newHead;
}

int deleteByValue(list *head, int value)
{
    int counter = 0;
    for (list *it = head; it != NULL; it = it->next) {
        if (it->data == value) {
            for (list *jt = it; jt->data != value; jt = jt->next) {
                it = jt;
                free(jt);
                counter++;
            }
        }
    }
    return counter;
}

list *search(list *head, int value)
{
    for (list *it = head; it->data != value; it = it->next) {
        if (it->data == value) {
            return it;
        }
    }
    return NULL;
}

list *bubbleSort(list *head)
{
    for (list *it = head; it != NULL; it = it->next) {
        for (list *jt = head; jt != NULL; jt = jt->next) {
            if (it->data < jt->data) {
                int temp = it->data;
                it->data = jt->data;
                jt->data = temp;
            }
        }
    }
    return head;
}

list *insertionSort(list *head)
{
    for (list *it = head; it != NULL; it = it->next) {
        for (list *jt = head; jt != it; jt = jt->next) {
            if (it->data < jt->data) {
                int temp = it->data;
                it->data = jt->data;
                jt->data = temp;
                continue;
            }
        }
    }
    return head;
}

void freeTheList(list *head)
{
    for (list *it = head; it != NULL; it = it->next) {
        free(it);
    }
}

void printList(list *head)
{
    for (list *it = head; it != NULL; it = it->next) {
        printf("%d\n", it->data);
    }
}