/*
CH-230-A
a7_p1.h
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#ifndef LIST_H
#define LIST_H

struct list {
  int info;
  struct list *next;
};
// add an element to a specific position:
struct list *addToPosit(struct list *myList, int value, int pos);

// reverse the list:
struct list* reverseList(struct list* myList);

// add an element to the front of the list:
struct list *bringToFront(struct list *myList, int value);

// print the list:
void printList(struct list *myList);

// add an element to the end of the list:
struct list *addToEnd(struct list *myList, int value);

// remove first element of the list:
struct list *removeFirst(struct list *myList);

// free the memory used by the list:
void freeMemory(struct list *myList);
#endif 
