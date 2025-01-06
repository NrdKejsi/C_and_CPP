/*
 CH-230-A
 a3_p6.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>                                                             

/*This is the function that will convert kg and grams to pounds
It takes 2 integer parameters and returns a float value. */

float to_pounds(int kg, int g){
    /*Creating a float variable that stores grams turned into
    kilograms. Then getting total mass by adding both kg values.*/
    float g_to_kg = (float) g / 1000;
    float mass = kg + g_to_kg;
    float pounds;
    pounds = mass * 2.2;

    return pounds;
}

int main(){
    /*Reading input from the user for kg and g. */
    int kg, g;
    scanf("%d", &kg);
    scanf("%d", &g);

    /*Creating the pounds variable and using the pre-defined
    function to make the conversion. Lastly we print the result
    of the conversion. */
    float pounds;
    pounds = to_pounds(kg, g);

    printf("Result of conversion: %f\n", pounds);

    return 0;
}
