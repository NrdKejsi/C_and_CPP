/*
 CH-230-A
 a6_p2.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
//We will use a bitwise operator to define this macro
#define LSB(n) (n & 1)
//If the lsb is 1, then x&1 returns 1, if it is 0, then it returns 0

int main(){
    unsigned char x;
    scanf("%c", &x);

    printf("The decimal representation is: %d\n", x);
    //To print the LSB we use the macro LSB() with x as parameter 
    printf("The least significant bit is: %d\n", LSB(x));

    return 0;
}
