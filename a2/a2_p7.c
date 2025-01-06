/*
 CH-230-A
 a2_p7.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */
#include <stdio.h>

int main(){
   int i = 8;
   
    /*In order to fix this loop, we need to add braces to enclose the
    loop statements. Without the braces, only the first immediate
    statement is considered as a part of the loop body so it will
    be the only one excecuted. The next statement (i--) will excecute
    only after the loop ends. Since the first statement only prints the
    value of i unchanged, the loop will be infinite.*/

   while (i >= 4){
    printf ("i is %d\n", i);
    i--;
    }

    //After adding the braces, the loop will function normally
    printf("That's it.\n");
    return 0;
}