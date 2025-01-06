/*
CH-230-A
a7_p1.c
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

struct list *addToPosit(struct list *myList, int value, int pos) {
  //If a negative position is entered
  if (pos < 0) {
    printf("Invalid position!\n");
    //return previous list
    return myList;
  }
  //creating a new pointer and allocating it
  struct list *new = (struct list *)malloc(sizeof(struct list));
  if (new == NULL) {
    printf("Error allocating memory!\n");
    return myList;
  }
  //assigning the valiue of intefer field
  new->info = value;
  /*if position entered is 0, the next pointer points at the 
  original first element, (myList is pointer to original first
  element). We return new as pointer to the first element.*/
  if (pos == 0) {
    new->next = myList;
    return new;
  }
  /*Creating a ptr named current that will iterate through
  the list. Int count will be used to be compared with 
  int pos. */
  struct list *current = myList;
  int count = 0;

  while (current) {
    if (count == pos - 1) {
      /*Since the new element will take the current element's
      place, the new-> next pointer will point to the same
      thing as current-> next. */
      new->next = current->next;
      /*We have to update the current->next pointer to point
      to new element.*/
      current->next = new;
      //we return the edited list.
      return myList;
    }
    /*if we haven't reached the element we want to "replace" and
    then shift, then we iterate to the next pointer (updating
    current), and also increment count.*/
    current = current->next;
    count++;
}
  /*If none of the cases above are satisfied, it means that the
  position given is larger than the number of elements of the
  list. Therefore we print the invalid position statement:*/
  printf("Invalid position!\n");
  return myList;
}

struct list* reverseList(struct list* myList){
    //setting 2 pointers equal to NULL
    struct list *ptr1 = NULL;
    struct list *ptr2 = NULL;

    while(myList){
        //using three pointers in order to switch elements
        ptr2 = myList -> next;
        myList -> next = ptr1;
        ptr1 = myList;
        myList = ptr2;
   } 
   myList = ptr1;

   return myList;
}

struct list *bringToFront(struct list *myList, int value) {
  //Declaring and dynamically allocating new pointer's memory
  struct list *new;
  new = (struct list *)malloc(sizeof(struct list));
  //Checking if allocation worked
  if (new == NULL) {
    printf("Error!");
    return myList;
  }

  //Asigning value to the int field of node
  new->info = value;
  /*For the added element to be in the front, the next pointer
  is the one that points to the original first element (myList)*/
  new->next = myList;

  return new;
}

void printList(struct list *myList) {
  //Declaring counter ptr such that it points to 1st element
  struct list *counter = myList;

  //writing a loop that runs until there is no more list elements
  while (counter) {
    printf("%d ", counter->info);
    //moving forward by one in the list
    counter = counter->next;
  }
  printf("\n");
}

struct list *addToEnd(struct list *myList, int value) {
  struct list *iterate = myList;

  //Declaring and dynamically allocating new pointer's memory
  struct list *new_el;
  new_el = (struct list *)malloc(sizeof(struct list));

  //Checking if allocation worked
  if (new_el == NULL) {
    printf("Error!");
    return myList;
  }

  // Asigning value to the int field of node
  new_el->info = value;
  /*For the added element to be in the back, the next pointer
  will be NULL (new_el points to end)*/
  new_el->next = NULL;

  if (myList == NULL) {
    //means list is empty, only return new element
    return new_el;
  } 
  else {
    //using a quick loop to move to the last pointer
    while (iterate->next) {
      iterate = iterate->next;
    }

    //the last pointer points to new element
    iterate->next = new_el;
    return myList;
  }
}

struct list *removeFirst(struct list *myList) {
  struct list *toRemove;
 
  if (myList == NULL) {
    //if list is empty, we return it as it is
    return myList;
  } 
  else {
    //toRemove pointer will point to the first element
    toRemove = myList;

    //the original first pointer will point to the second element
    myList = myList->next;

    //It will free the memory it holds
    free(toRemove);
    return myList;
  }
}

void freeMemory(struct list *myList) {
  //declaring a temporary pointer that will iterate through list
  struct list *iterate;

  //myList will remain the same, while iterate'll change in the loop
  //loop will run until iterate becomes NULL

  while (myList != NULL) {
    iterate = myList->next;
    free(myList);

    myList = iterate;
    // the pointer will iterate to the next one
  }
}

