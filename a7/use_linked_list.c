/*
CH-230-A
a7_p1.c
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main() {
  char c;
  int n, x, pos, value;

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
    
      case 'i':
        //insert number at specific position:
        scanf("%d%d", &pos, &value);
        myList = addToPosit(myList, value, pos);
        break;
      case 'R':
        // reverse entire list order:
        myList = reverseList(myList);
        break;
    } 
  }

  return 0;
}
