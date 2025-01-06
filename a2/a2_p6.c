/*
 CH-230-A
 a2_p6.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

int main(){
    //Initializig the two doubles
    double x, y;
    
    //Reading the input of x and y from the user
    scanf("%lf", &x);
    scanf("%lf", &y);

    /*Declaring and initializing the pointers, and appointing the same
    address to pointer 1 and 2*/
    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    //Printing the values of the pointers 
    printf("The value of the first pointer is:%p\n", ptr_one);
    printf("The value of the second pointer is:%p\n", ptr_two);
    printf("The value of the third pointer is:%p\n\n", ptr_three);

    /*Explaining that the first two pointers hold the same memory
    address while the second holds a different one.*/ 
    printf("Evidently, the first and second pointer are of equal value.\n");
    printf("This means they hold the same memory address.\n\n");

    printf("The third pointer, on the other hand, has a different value.\n");
    printf("It holds the memory address of a different variable (y).");

    return 0;
}