#include <stdio.h>
#include "linkedList.h"

int main() {
    LinkedList* list = createList();

    pushBack(list, 10);
    pushBack(list, 20);
    pushBack(list, 30);

    printList(list);

    return 0;
}
