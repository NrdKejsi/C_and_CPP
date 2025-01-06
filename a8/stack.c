/**
 * @file stack.c
 *
 * CH-230-A
 * a8_p4.c
 * Kejsi Nuredini
 * knuredini@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

unsigned int count = 0;

void push(struct stack* myStack, int x) {
    //incrementing top to check if the array is full
    count++;
    //checking for stack overflow
    if (count > 16) { // since the array has 16 elements
        printf("Pushing Stack Overflow\n");
        return;
    }
    //pushing the element x onto the stack
    myStack->array[myStack->count++] = x;
}