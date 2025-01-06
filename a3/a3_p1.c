/*
 CH-230-A
 a3_p1.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

 #include <stdio.h>

 int main(){
    //Reading the value of the float x from user
    float x;
    scanf("%f", &x);
    //Reading the value of integer n from user
    int n;
    scanf("%d", &n);

    /* In case the value is 0 or less, it is invalid. So we specify 
    this condition in a while loop, so that it continues even if an
    invalid value is reentered. */
    while (n <= 0){
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }
    /* To print the value of x, n amount of times, we'll use the for
    loop. It starts at 1=0, and it prints the value each time the i
    variable is incremented. The loop stops when the value of i
    reaches n. */
    for (int i = 0; i < n; i++){
        printf("%f\n", x);
    }

    return 0;
 }