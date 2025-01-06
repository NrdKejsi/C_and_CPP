/*
 CH-230-A
 a2_p4.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

int main(){
    float a, b, h; // declaring the float variables

    //Reading the input from the user for the three float values
    scanf("%f", &a); 
    scanf("%f", &b);
    scanf("%f", &h);

    //Declaring the float variables for the areas we will calculate
    float sq_area, rct_area, trg_area, trpz_area; 

    //Calculating the areas using arithmetic operations
    sq_area = a * a;
    rct_area = a * b;
    trg_area = (a * h) / 2;
    trpz_area = (a + b) * h / 2;

    //Printing the areas in accordance with the testcase 
    printf("square area=%f\n", sq_area);
    printf("rectangle area=%f\n", rct_area);
    printf("triangle area=%f\n", trg_area);
    printf("trapezoid area=%f\n", trpz_area);

    return 0;
}