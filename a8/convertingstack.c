/**
 * @file convertingstack.c
 *
 * CH-230-A
 * a8_p4.c
 * Kejsi Nuredini
 * knuredini@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main(){
    //declaring a stack structure
    Stack myStack;
    //setting count field to 0
    myStack.count = 0;
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
        push(&myStack, rem);
        temp = temp / 2;

        //in case of stack overflow
        if(myStack.count > 32){
            printf("Pushing Stack Overflow\n");
            return 0;
        }
    }

    printf("The binary representation of %u is ", num);
    //this loop will print out the stack elements starting from top
    for(int i = count - 1; i >= 0; i--){
        printf("%d", myStack.array[i]);
    }
    printf(".\n");

    return 0;
}