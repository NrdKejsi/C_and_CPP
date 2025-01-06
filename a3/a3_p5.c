/*
 CH-230-A
 a3_p5.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

/*I'll use this function to calculate the sum of the elements in 
the array, with the input values being the array and the dimension, 
output being the duble sum. */

double sum_of_array(double array[ ], int dim){
    int idx;
    double sum = 0;
    for(idx = 0; idx < dim; idx++){
        sum += array[idx];
    }

    return sum; 
}
/*This function will be used when we need to print out the list of temp
in Fahrenheit. Each array element with index p, is turned into fahrenheit
until p reaches n, where the loop stops. */

void convert(double array[], int dim){
    int p;
    for(p=0 ; p <= dim ; p++){
    array[p] = (array[p] * 9 / 5) + 32;
    }
}

int main(){
    //Reading input from the user for the character
    char c;
    printf("Enter a character:\n");
    scanf("%c", &c);

    //Reading input from the user for integer value
    int n;
    printf("Enter an integer n:\n");
    scanf("%d", &n);

    //Reading n amount of double values from user
    printf("Now you can enter %d", n);
    printf(" double values:\n");

    /*Declaring the double array with 100 elements, since we can safely
    assume that no more than 100 values will be entered. Also
    declaring the helper variable i for the loop that will scan all the
    double values input by user and store them in this array.*/

    int i;
    double array[100];
    for (i=0; i < n; i++){
        scanf("%lf", &array[i]);
    }

    /*Next we will use the switch statement for the character input
    We have three cases and a default one. */
    switch (c){
    /*When character is s, the sum of temperatures is printed by
    using the sum function declared outside of the main function.*/
        case 's': 
            printf("Sum of temperatures: %lf", sum_of_array(array , n));
            //Printing the sum of temperatures
            break;

    /*When character is p, the list of temperatures is printed by
    using a for loop. The variable k is used to assist in the loop
    and it increments each time an array element is printed. This
    stops before k becomes = to n. */
        case 'p':
            printf("List of temperatures is:\n");
            int k;
            for(k=0; k < n; k++){
                printf("%lf\n", array[k]);
            }
            //Printing the list of temperatures as it is
            break;
        
    /*When character is t, the list of fahrenheit temperatures is
    printed by using a for loop. Inside the loop we use the convert
    function declared outside of main function and print each array
    element. */
        case 't': 
            printf("List of temperatures in Fahrenheit is:\n");
            int b;
            convert(array, n);
            for(b=0; b < n; b++){
            
            printf("%lf\n", array[b]);
            }
            //Printing the fahrenheit temperatures
            break;

    /*The default statement prints the temperature mean by using the
    previous sum function and dividing it by n (number of elements).*/
        default: 
            printf("The list mean is: %lf", sum_of_array(array , n)/n );      
            //Printing the average of temperatures
            break;
    }

    return 0;
}
