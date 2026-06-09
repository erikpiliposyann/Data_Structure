#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

LinkedList* createList() {
    LinkedList* list = (LinkedList*) malloc(sizeof(LinkedList));   
    if (!list) {
        printf("Error");
        exit(1);
    }
    list->head = NULL;
    return list;
}

void pushBack(LinkedList* list, int data) {
    if (!list) {
        printf("Error");
        exit(1);
    }
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if(list->head == NULL){
        list->head = newNode;
    }
    else{
        Node* temp = list->head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void pushFront(LinkedList* list, int data) {
    if (!list) {
        printf("Error");
        exit(1);
    }

    Node* newNode = (Node*) malloc(sizeof(Node));

    if (newNode == NULL) {
    printf("Memory allocation failed\n");
    exit(1);
    }
    newNode->data = data;   
    newNode->next = list->head;

    list->head = newNode;
}

void popFront(LinkedList* list){
     if (list == NULL) {
        printf("Error: list is NULL\n");
        exit(1);
    }

    if (list->head == NULL) {
        printf("List is empty\n");
        return;
    }
    Node* temp = list->head;
    list->head = list->head->next;
    
    free(temp);
}

int getSize(LinkedList* list){
    if (!list) {
        printf("Error");
        exit(1);
    }
    int size = 0;
    Node* temp = list->head;

    while(temp != NULL){
        temp = temp->next;
        size++;
    }
    return size;
}

void printList(LinkedList* list){
    if (!list) {
        printf("Error");
        exit(1);
    }

    Node* tmp = list->head;

    while (tmp) {
        printf("%d -> ", tmp->data);
        tmp = tmp->next;
    }

    printf("NULL");

    
}

void freeList(LinkedList* list){
    if (!list) {
        printf("Error");
        exit(1);
    }
    Node* temp = list->head;
    while (temp != NULL) {
        Node* next = temp->next;
        free(temp);
        temp = next;
    }
    list->head = NULL;
}

