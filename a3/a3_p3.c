/*
 CH-230-A
 a3_p3.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

/*Defining the convert function to take int value of cm, and return
a float value of km. For the precision decimal numbbers we convert
cm to float in the division. The return value is km. */
float convert(int cm){
    float km;
    km = (float)cm / 100000;
    return km;
}

int main(){
    //Reading input for cm from user.
    int int_length;
    scanf("%d", &int_length);

    /*Declaring the km_conversion variable and using the convert
    function to turn the cm to km. Lastly, we print the result.*/
    float km_conversion;
    km_conversion = convert(int_length);
    printf("Result of conversion: %f\n", km_conversion);
    return 0;
}