# 🔗 Linked List Implementation in C

This project implements a **singly linked list** in C, providing basic operations such as insertion, deletion, traversal, and memory management.

---

# 📌 Data Structures

## Node

Each node stores:

*  `data` → integer value
*  `next` → pointer to the next node

```c id="node"
typedef struct Node {
    int data;
    struct Node* next;
} Node;
```

---

## LinkedList

The list maintains:

* 🎯 `head` → pointer to the first node

```c id="list"
typedef struct LinkedList {
    Node* head;
} LinkedList;
```

---

# ⚙️ Functions

## 🆕 createList()

Creates and initializes an empty linked list.

```c id="create"
LinkedList* createList();
```

---

## ➕ pushBack()

Adds an element at the end of the list.

```c id="pushback"
void pushBack(LinkedList* list, int data);
```

---

## ➕ pushFront()

Adds an element at the beginning of the list.

```c id="pushfront"
void pushFront(LinkedList* list, int data);
```

---

## ❌ popFront()

Removes the first element of the list.

```c id="popfront"
void popFront(LinkedList* list);
```

---

## 📏 getSize()

Returns the number of elements in the list.

```c id="size"
int getSize(LinkedList* list);
```

---

## 🖨️ printList()

Prints all elements in the list.

Example output:

```text id="print"
10 -> 20 -> 30 -> NULL
```

```c id="printfunc"
void printList(LinkedList* list);
```

---

## 🧹 freeList()

Frees all allocated memory and clears the list.

```c id="free"
void freeList(LinkedList* list);
```

---

# 🚀 Example Usage

```c id="main"
LinkedList* list = createList();

pushBack(list, 10);
pushBack(list, 20);
pushBack(list, 30);

printList(list);
```

### Output:

```text id="out"
10 -> 20 -> 30 -> NULL
```

---

# 🧠 Concepts Covered

* Dynamic memory allocation (`malloc`, `free`)
* Pointers in C
* Linked list operations
* Header files (`.h`)
* Modular programming
* Memory management

---

# ⚠️ Notes

* Always call `freeList()` to avoid memory leaks.
* Check for `NULL` pointers before operations.
* This is a **singly linked list (not doubly linked)**.

---

# 🎯 Goal

This project helps understand:

* How dynamic data structures work in C
* How memory is managed manually
* How linked nodes form a chain-like structure
