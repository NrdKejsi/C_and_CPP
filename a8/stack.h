/**
 * CH-230-A
 * a8_p4.c
 * Kejsi Nuredini
 * knuredini@jacobs-university.de
*/

#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    unsigned int count;
    int array[32]; //container
} Stack;

//declaring count variable without defining it:
extern unsigned int count;

//same function of problem 7.7 for inserting elements in stack
void push(struct stack* myStack, int x);

#endif