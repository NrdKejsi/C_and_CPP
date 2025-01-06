/*
 CH-230-A
 a1_p2.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

int main(){
    int result;
    result = (2 + 7) * 9 / 3;
    printf ("The result is %d\n", result);
    /*The variable name 'result' needs to be called*/
    return 0;
    /*In line 6, we specified that an integer needs to be printed (%d).
     If we do not call the variable 'result'the program will choose a
     random set of numbers to print, which is why values will vary.*/
}
