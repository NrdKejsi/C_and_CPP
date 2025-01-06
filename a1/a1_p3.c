/*
 CH-230-A
 a1_p3.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

int main (){
    float result;
    int a = 5;
    float b = 13.5; /* The value 13.5 is not an integer and thus we need to
    use a different data type. In this case, float is the best choice. */
    result = a / b; 
    printf ("The result is %lf\n", result); /*The original specifier (%d) is
    for decimal integers, but our result is a periodic number. In our case,
    we need specifier %lf for float data type.*/
    return 0;
}
