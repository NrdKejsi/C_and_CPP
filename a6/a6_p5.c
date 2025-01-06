/*
 CH-230-A
 a6_p5.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

int main(){
   unsigned char x;
   scanf("%c", &x);

   printf("The decimal representation is: %d\n", x);
   printf("The backwards binary representation is: ");  

   /*While x is not NULL, we check each least significant (most
   right) bit and if it is 1, the value of x & 1 is 1 (true) and
   1 is printed. if it is 0, the value of x & 1 is 0 (false) and
   0 is printed.*/
   while(x){
        if(x & 1)
            printf("1");
        else
            printf("0");
        /*We shift by one to the right and check the next least
        significant bit as the loop repeats the same process.*/
        x = x >> 1 ;
   }
   
   printf("\n");

   return 0;
}
