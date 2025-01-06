/*
 CH-230-A
 a6_p3.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
/*For these macros we'll use the conditional operator '?:'. The first
two macros will find the minimum and maximum of 3 values a, b, c. Within
the first two values, the smallest will be returned and then compared to
the last value (c). The smallest of the two will be the final value. The
same logic follows the MAX macro. The MID macro takes two parameters and
returns the sum divided by 2.*/
#define MIN(a, b, c) (((a<b) ? a : b) < c) ? ((a<b) ? a : b) : c
#define MAX(a, b, c) (((a>b) ? a : b) > c) ? ((a>b) ? a : b) : c
#define MID(a, b) ((a + b) / 2.0)

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    /*To print the mid-range we'll call the MID macro and use the two
    MIN and MAX macros as its parameters.*/
    printf("The mid-range is: %.6f\n", MID((MIN(a, b, c)), (MAX(a, b, c))));
    return 0;
}
