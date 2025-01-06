/*
 CH-230-A
 a3_p2.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */
#include <stdio.h>

int main(){
    //Declaring all three variables we'll use
    char ch;
    int n, idx;

    //Asking the user for input for both variables
    printf("Enter a lowercase letter: ");
    scanf("%c", &ch);

    printf("Now enter any integer: ");
    scanf("%d", &n);

    //Printing the character first, without any integer following
    printf("%c\n", ch);

    /*Initializing the idx value outside of the loop. Assigning the
    value 1, and then inside the loop, we'll be incrementing it until
    it reaches the n value. */

    idx = 1;
    while (idx <= n){
        printf("%c-", ch);
        printf("%d\n", idx);
        idx++;
    }

    return 0;
}