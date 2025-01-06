/*
 CH-230-A
 a3_p10.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

/*This float function has floats a and b as parameters and it 
returns their product value.*/
float product(float a, float b){
    float prod;
    prod = a * b;
    return prod;
}

/*This void function does not return a value like the one above. It
indirectly returns a value using a pointer. The pointer stores the 
address of the product. *p expresses the value. */
void productbyref(float a, float b, float *p){
    *p = a * b; 
}

/*This void function modifies the values of the float a and b by using
their pointers, instead of changing them directly. */
void modifybyref(float *a, float *b){
    *a += 3;
    *b += 11;
}

int main(){
    /*Declaring the float variable that will be read by keyboard*/
    float a, b, prod;
    /*Reading a and b from user.*/
    printf("Enter a float value: ");
    scanf("%f", &a);
    printf("Enter a second float value: ");
    scanf("%f", &b);

    /*Using the first function to print the product. Input is a and b.*/
    printf("Product from 1st function:%f\n", product(a, b));

    /*Calling the productbyref function.*/
    productbyref(a, b, &prod);

    /*The result is prod from the second function.*/
    printf("Product from 2nd function:%f\n", prod);

    /*We show that the two results from the first two functions are
    equal.*/
    printf("Evidently, the results of these two functions are equal.\n");

    /*Calling the modifybyref function.*/
    modifybyref(&a, &b);

    /*The results are the new values of a and b*/
    printf("The new values of a & b are:%f and %f\n", a, b );

    return 0;
}
