//
// Created by user on 2019. 05. 20..
//

#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int data;
    struct list *next;
} list;

void insertAtTheEnd(list *head, int data);

void insertAtTheBeginning(list *head, int data);

void insertAfter(list *head, list *node, int data);

int size(list *head);

int empty(list *head);

list *delete(list *head);

int deleteByValue(list *head, int value);

list *search(list *head, int value);

list *bubbleSort(list *head);

list *insertionSort(list *head);

void freeTheList(list *head);

void printList(list *head);

#endif //LINKED_LIST_LINKED_LIST_H