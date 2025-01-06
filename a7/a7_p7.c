/*
CH-230-A
a7_p7.c
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct stack {
    unsigned int count;
    int array[12]; //container
};

typedef struct stack Stack;

//creating a variable that will keep track of stack flow
int top = -1; //initialize top to -1

void push(struct stack* myStack, int x) {
    //incrementing top to check if the array is full
    top++;
    //checking for stack overflow
    if (top == 11) { // Changed max - 1 to 11 since the array has 12 elements
        printf("Pushing Stack Overflow\n");
        return;
    }
    //pushing the element x onto the stack
    myStack->array[myStack->count++] = x;
    printf("Pushing %d\n", x);
}

void pop(struct stack* myStack) {
    // Check if the stack is empty
    if (top < 0) {
        printf("Popping Stack Underflow\n");
        return;
    }
    //rmoving an element from the stack
    myStack->array[myStack->count--] = 0; // Clear the value (optional)
    //decrement top when something is removed
    top--;
}

void empty(struct stack* myStack) {
    int i;
    printf("Emptying Stack ");
    //creating a loop to remove every element
    for (i = top; i >= 0; i--) {
        printf("%d ", myStack->array[i]);
        pop(myStack);
    }
    printf("\n");
}

//function to check if the stack is empty
int isEmpty(struct stack* myStack) {
    if (top < 0) {
        return 1; //true
    } else {
        return 0; //or false
    }
}

int main() {
    char option;
    int x;
    struct stack myStack;
    //initializzing count
    myStack.count = 0;

    //loop continues until we quit
    while (1) {
        scanf(" %c", &option);

        switch (option) {
            case 's':
                scanf("%d", &x);
                //inserting a value by push
                push(&myStack, x);
                break;

            case 'p':
                //removing a value by pop
                pop(&myStack);
                break;

            case 'e':
                empty(&myStack);
                break;

            case 'q':
                //quit the program
                printf("Quit\n");
                exit(1);
                break;
        }
    }
    return 0;
}
