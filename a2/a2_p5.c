/*
 CH-230-A
 a2_p5.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

int main(){
    int a; //Declaring the integer variable a

    //Reading the value input from the user
    scanf("%d", &a);
    //Printing the value on the screen
    printf("The value of the integer is: %d\n", a);

    int *ptr_a; //Declaring the pointer to variable a
    ptr_a = &a; //Returning the address of the variable

    //Printing the address of the variable 
    printf("The address of the integer: %p\n", ptr_a);

    //Increasing the value of a by 5 using its pointer 
    *ptr_a += 5;
    //Printing the new value and address
    printf("After the addition, the value of a is: %d\n", *ptr_a);
    printf("The address of the integer is: %p\n", ptr_a);

    return 0;
}