/*
 CH-230-A
 a5_p10.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

void recurs(int n){
    //Base case when n=1, only one is returned
    //Assunming the input is valid (+ive), we don't consider 0 as input
    if (n == 1){
        printf("%d.", 1);
        return; 
    }
    //These statements will be evaluated if n != 1.
    printf("%d, ", n);
    /* Direct calling the recurs function inside itself.*/
    recurs(n-1);
}   

int main(){
    //Declaring integer n
    int n;
    //Asking user for input and scanning n 
    printf("Enter an integer n: ");
    scanf("%d", &n);

    
    printf("The descending values from n are: \n");
    recurs(n);

    return 0;
}
