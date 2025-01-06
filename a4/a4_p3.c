/*
 CH-230-A
 a4_p3.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <math.h>

/* To find the geo mean we use a function from the math library pow().
 The power will be 1.0 (needs to be a float since we're dividing with
 an integer), divided by num as the number of array elements.*/
float geometric_mean(float arr[], int num){
    int i;
    float product;
    product = 1;
    for(i=0; i<num; i++){
        product *= arr[i];
    }
    float mean_result;
    mean_result = pow(product, 1.0/num);
    return mean_result;
    
}

/* This function finds the highest value in the array by using a loop
that checks if each element is bigger than its predecessor. If so,
it becomes the highest_nr. The loop continues until all elements have
been checked. The function will return the highest value. */
float highest(float arr[], int num){
    float highest_nr;
    int i;
    for(i=0; i<num; i++){
        if(i>0 && arr[i]>arr[i-1]){
            highest_nr = arr[i];
        }
    }
    return highest_nr;
}

/*This function finds the lowest value in the array by using a loop
that checks if each element is smaller than its predecessor. The
lowest_nr is initialized as arr[0] outside of the loop, and inside
its compared with every following element. The loop continues until
all elements have been checked. The function will return the
lowest value. */
float lowest(float arr[], int num){
    float lowest_nr;
    lowest_nr = arr[0];
    int i;
    for(i=0; i<num; i++){
        if(i>0 && arr[i]<arr[i-1]){
            lowest_nr = arr[i];
        }
    }
    return lowest_nr;
}

/*This function finds the sum of the values by using a for loop
to continuously add each element of the array to the sum float.
When all the elements are added and the loop ends, the function
returns the sum value.*/
float find_sum(float arr[], int num){
    float sum;
    sum = 0;
    int i;
    for(i=0; i<num; i++){
        sum += arr[i];
    }
    return sum;
}


int main(){
    float array[15];
    int i;
    int index = 0;


    for(i=0; i<15; i++){
        float value;
        scanf("%f", &value);
        if(value<0){
            break;
        }
        array[index] = value;
        index++;
    }

    /*Reading a character from the user, using getchar()
    so the program doesn't scan the '\n' character.*/
    char c;
    getchar();
    scanf("%c", &c);

    //Computing the geometric mean using our geometric_mean function
    float geo_mean;
    geo_mean = geometric_mean(array, index);
    //Finding the highest value using our highest() function
    float highest_nr;
    highest_nr = highest(array, index);
    //Finding the smallest value using our lowest() function
    float lowest_nr;
    lowest_nr = lowest(array, index);
    //Computing the sum using our find_sum() function
    float sum;
    sum = find_sum(array, index);

    /*We use the switch statement to print one of the above values
    depending on the character that was input by user. A default
    statement will not be included since the problem did not
    specify.*/
    switch (c){
        case 'm':
            printf("The geometric mean of array: %f\n", geo_mean);
            break;
        case 'h':
            printf("The highest value: %f\n", highest_nr);
            break;
        case 'l':
            printf("The lowest value: %f\n", lowest_nr);
            break;
        case 's':
            printf("The sum of the array values: %f\n", sum);
            break;
    }
    return 0;
}
