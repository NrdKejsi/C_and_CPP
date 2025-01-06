/*
 CH-230-A
 a6_p6.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

int main(){
    unsigned char x;
    scanf("%c", &x);

    printf("The decimal representation is: %d\n", x);
    printf("The binary representation is: ");  

    /*Declaring the bit mask outside of the loop, so it's not 
    redefined repeatedly. Choosing 2^7, so that we start the 
    'comparison' with the first bit.*/
    int bit_mask = 128;
    //128 to binary -> 10000000
    //Loop ends when bit_mask becomes 0
    while(bit_mask){
        if(x & bit_mask)
            printf("1");
        else
            printf("0");
    /*The bit_mask will shift to the right by one until it becomes
    0. So it will go from 10000000 to 01000000 to 00100000 until
    it's 00000000.*/
    bit_mask = bit_mask >> 1 ;
   }
   
   printf("\n");

   return 0;
}
