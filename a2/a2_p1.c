/*
CH-230-A
a2_p1.c
Kejsi Nuredini
knuredini@jacobs-univesrity.de
*/

#include <stdio.h>

int main(){
    //declaring the variables
    double a, b;
    int x, y;
    char c_1, c_2;
    //getting input from user for doubles
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    /*printing values of sum, difference and square
    completing calculations inside the function*/
    printf("sum of doubles=%8lf\n", a + b);
    
    printf ("difference of doubles=%8lf\n", a - b);
    
    printf ("square=%8lf\n", a * a);
    //gettting input from user for integers
    scanf ("%d", &x);
    scanf ("%d", &y);
    //printing sum and product of integer values
    printf ("sum of integers=%d\n", x + y);
    printf ("product of integers=%d\n", x * y);
    /*in order for scanf to wprk right and not include "enter" 
    as a char value we use getchar(),then get input from user for char values*/
    getchar();
    scanf ("%c", &c_1);
    getchar();
    scanf ("%c", &c_2);
    //printing values both as integers and as char values
    printf ("sum of chars=%d\n", c_1 + c_2);
    printf ("product of chars=%d\n", c_1 * c_2);
    
    printf ("sum of chars=%c\n", c_1 + c_2);
    printf ("product of chars=%c\n", c_1 * c_2);

    return 0;
}
