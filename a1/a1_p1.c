/*
CH-230-A
a2_p1.c
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <stdio.h>

int main() {
    double result; /*The result of our calculation */
    // converting one of the operands into a double so result is correct
    result = (double)(3 + 1) / 5;
    
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}
