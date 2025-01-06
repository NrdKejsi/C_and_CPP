/*
CH-230-A
a8_p4.c
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    unsigned int count;
    int array[32]; //container
} Stack;

unsigned int globalCount = 0;

void push(struct stack* myStack, int x) {
    //incrementing top to check if the array is full
    globalCount++;
    //checking for stack overflow
    if (globalCount > 32) { // since the array has 32 elements
        printf("Pushing Stack Overflow\n");
        return;
    }
    //pushing the element x onto the stack
    myStack->array[myStack->count++] = x;
}

int main(){
    //declaring a pointer to a stack structure
    Stack* myStack;
    myStack->count = 0;
    //scanning the unsigned integer
    unsigned int num;
    scanf("%u", &num);
    /* in order to compute divisions with the value of num, but
    also not changing the actual variable, we create a temporary
    variable of the same type that stores the value of num. */
    unsigned int temp = num;
    int rem;

    while(temp != 0){
        //the remainder will become part of the stack
        rem = temp % 2;
        push(myStack, rem);
        temp = temp / 2;

        //in case of stack overflow
        if(myStack->count > 16){
            printf("Pushing Stack Overflow\n");
            free(myStack);
            return 0;
        }
    }

    printf("The binary representation of %u is ", num);
    //this loop will print out the stack elements starting from top
    for(int i = globalCount - 1; i >= 0; i--){
        printf("%d", myStack->array[i]);
    }
    printf(".\n");

    return 0;
}