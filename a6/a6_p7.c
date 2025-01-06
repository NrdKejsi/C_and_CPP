/*
 CH-230-A
 a6_p7.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <math.h>

int set3bits(unsigned char x, int a, int b, int c){
    /*We'll use the bitwise operator OR '|' so that if
    we have 1|0 its 1, if it's 0|0 its 0, and 1|1 its 1.
    In order to only set the positions a, b, c, we create
    a mask that only has a 1 digit in the position a, b
    and c. Than we replace x with x|mask.*/
    int mask = pow(2, a) + pow(2, b) + pow(2, c);
    x = x | mask;

    return x;
}

int main(){
    unsigned char x;
    scanf("%c", &x);
    //reading three positions a, b, c 
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    printf("The decimal representation is: %d\n", x);
    printf("The binary representation is: ");
    //printing the binary representation
    int bit_mask = 128;
    while(bit_mask){
        if(x & bit_mask)
            printf("1");
        else
            printf("0");
        bit_mask = bit_mask >> 1 ;
    }
    printf("\n");
    printf("After setting the bits: ");

    x = set3bits(x, a, b, c);
    //Resetting bit_mask's value
    bit_mask = 128;
    //printing backwards version of binary represent.
    while(bit_mask){
        if(x & bit_mask)
            printf("1");
        else
            printf("0");
        bit_mask = bit_mask >> 1 ;
    }
    printf("\n");

    return 0;
}
