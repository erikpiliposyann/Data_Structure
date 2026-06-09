#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct LinkedList {
    Node* head;  
} LinkedList;

LinkedList* createList();

void pushBack(LinkedList* list, int data); 

void pushFront(LinkedList* list, int data);

void popFront(LinkedList* list);

int getSize(LinkedList* list);

void printList(LinkedList* list);

void freeList(LinkedList* list);

#endif
