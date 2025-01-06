/*
 CH-230-A
 a4_p10.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h> 
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div,
float *pwr, float *invb) { 
    //The product of the two floats a and b, by reference:
    *prod = a * b; 
    //The division of a and b by reference:
    *div = a/b; 
    //Using a function from math.h library, a to the power of b:
    *pwr = pow(a,b); 
    //The inverse of b, by reference:
    *invb = 1/b;  
}

int main() { 
    //Reading a and b from the user
    float a, b;
    printf("Enter a and b:\n"); 
    scanf("%f %f", &a, &b); 

    //Declaring the computation variables:
    float prod, div, pwr, invb; 
    //Calling our function above
    proddivpowinv(a, b, &prod, &div, &pwr, &invb); 

    /*Printing each computation value to see if our function 
    works correctly.*/
    printf("To check our function works correctly:\n\n");
    printf("The product of a & b is:%f\n", prod); 
    printf("The division of a & b is:%f\n", div); 
    printf("The value a to the power of b is:%f\n", pwr); 
    printf("The inverse of b is:%f\n", invb); 

    return 0; 

}
