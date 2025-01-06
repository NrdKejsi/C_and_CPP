/*
 CH-230-A
 a2_p3.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

int main(){
    //Declaring the integer variables for the user input
    int weeks, days, hours;

    //Asking and reading input from the user for number of weeks
    printf("Enter the number of weeks: ");
    scanf("%d", &weeks);

    //Asking and reading input from the user for number of days
    printf("Next enter the number of days: ");
    scanf("%d", &days);
    
    //Asking and reading input from the user for number of hours
    printf("Lastly, enter the number of hours: ");
    scanf("%d", &hours);
    
    //Calculating the total hours using arithmetic operations
    int total_hours = (weeks * 168) + (days * 24) + hours;
    printf("The total number of hours calculated is: %d\n",total_hours);

    return 0;
}
