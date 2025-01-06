/*
 CH-230-A
 a2_p10.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

int main(){
    //Declaring the integer variables to be used
    int n, a;
    a = 1;
    //Reading the integer n value from the user
    printf("Enter an integer: ");
    scanf("%d", &n);

    /*Writing a loop for when the user enters an invalid value equal to
    or less than 0. The program will ask for a new value, and it will
    continue to do so until a valid value is given. That's when the loop
    ends.*/

    while (n <= 0){
        printf("You entered an invalid value! Please try again: ");
        scanf("%d", &n);
    }

    /*This loop is for valid values that will increment until they reach
    the value of n */

    while (a <= n){
    /*This is where double selection is required. For the first value (1),
    we need to print "day", whereas for values more than one we need to
    print "days". */

        if(a == 1){
            int hours = a * 24;
        printf("%d day = ", a);
        printf("%d hours \n", hours);
        }
        else {
           int hours = a * 24;
            printf("%d days = ", a);
            printf("%d hours \n", hours); 
        }
    /*After the statements are executed,the value of a will increment and
    the loop will start again. This will continue until the condition
    that a is smaller than or equal to proves false. */
        a++;
        }

    return 0;

    }
