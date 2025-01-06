/*
 CH-230-A
 a2_p2.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

int main(){
    //declaring the variable
    char a; 

    //reading char variable from the user input
    scanf("%c", &a); 

    //printing char as a character by using %c
    printf("character=%c\n", a);

    //printing char as a decimal integer using %d
    printf("decimal=%d\n", a); 

    //printing char as an octal integer using %o
    printf("octal=%o\n",a);
    
    //printing char as a hexadecimal integer using %x
    printf("hexadecimal=%x\n", a); 

    return 0;
}
