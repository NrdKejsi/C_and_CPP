/*
CH-230-A
a6_p8.c
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
 
//declaring list with two fields (an integer and a pointer)
struct list {
  int info;
  struct list *next;
};


//add an element to the front of the list:
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
 

// print the list:
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


// add an element to the end of the list:
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

// remove first element of the list:
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


// free the memory used by the list:
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


int main() {
  char c;
  int n;
  int x;

  //since we start off with no values, list is inititally empty
  struct list *myList = NULL;

  while (1) {
    scanf("%c", &c);
    switch (c) {
      case 'a':
        // add value to the end of the list
        scanf("%d", &n);
        myList = addToEnd(myList, n);
        break;

      case 'b':
        scanf("%d", &x);
        // bring value to front of the list
        myList = bringToFront(myList, x);
        break;

      case 'r':
        //remove first element from the list
        myList = removeFirst(myList);
        break;

      case 'p':
        // print the list
        printList(myList);
        break;

      case 'q':
        // free memory and quit execution of the program
        freeMemory(myList);
        return 0; //for quiting the execution of the program
        break;
    }
  }

  return 0;
}