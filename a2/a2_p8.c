/*
 CH-230-A
 a2_p8.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

int main(){
    //Declaring the integer variables that will be used later
    int a;
    //Reading the integer value a from the user
    scanf("%d", &a);
    
    /* If the remainder being equal to 0 is true both times, then
    the integer a is divisible by both 2 and 7. The following phrase
    will be printed*/

    if ((a % 2 == 0) && (a % 7== 0))
        printf("The number is divisible by 2 and 7\n");

    /* If the remainder is equal to 0 in only one case, or in neither
    case, then the condition will not be matched. The number is not
    divisible by 2 and 7, and the following phrase will be printed.*/
    
    else 
        printf("The number is NOT divisible by 2 and 7\n");
    
        

    return 0;
}
