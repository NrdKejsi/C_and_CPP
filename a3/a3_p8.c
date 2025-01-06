/*
 CH-230-A
 a3_p8.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h> 

/*Declaring a float function that computes the sum by taking the
array and its dimension as parameters and will return the float sum.*/
float get_sum(float array[], int dim){
    int idx;
    float sum = 0.0;
    for(idx=0; idx<dim; idx++){
        sum += array[idx];
    }
    return sum;
}

/*Declaring a float function that computes the average by dividing the
sum (that we calculate using the function get_sum() above) by the size
of the array. This function takes the array and its dimension as its
parameters and returns the average value.*/
float get_avg(float array[], int dim){
    float average;
    float sum = get_sum(array, dim);
    average = sum / dim;
    
    return average;
} 

int main(){
    //Declaring array with up to 10 elements, input and i
    float array[10];
    float input;
    int i;

    /*The loop will run as long as i doesn't equal 10, and it will stop
    once the number -99.0 is entered by the user. Each input value
    will be stores in the array with index i.*/
    for(i=0; i<10; i++){
        scanf("%f", &input);
        if(input == -99.0)
            break;

        array[i] = input; 
    }

    /*Lastly we print the sum and the average, with the calculations
    done using the functions made above. */
    printf("The sum of the floats is: %f\n", get_sum(array, i));

    printf("The average of the floats is: %f\n", get_avg(array, i));
}
