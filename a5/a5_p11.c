/*
 CH-230-A
 a5_p11.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

/*The recursive function takes integer x and a divisor as its
arguments. The divisors initial values will be x-1. When the
divisor becomes 1 (our base case), the funct returns 1 signifying
x is prime. If at any step, x is divided (without remainder) by 
div(not 1), then the function returns 0 signifying x is not prime.*/
int recurs(int x, int div){
    if(div == 1 || div == 0){
        return 1;
    }
    else if(x % div == 0){
        return 0;
    }
    else{
        return recurs(x, div -1);
    }
}

int main(){
    //Declaring and reading an integer x from user
    int x;
    scanf("%d", &x);

    if(x <= 1){
        printf("%d is not prime\n", x);
    }
    else {
        //If the recurs funct returns 0 -> x is not a prime
    if(recurs(x, x-1) == 0){
        printf("%d is not prime\n", x);
    }
    //If the recurs function returns anything but 0(1) -> x is prime
    else{
        printf("%d is prime\n", x);
    }
    }

    return 0;
}
