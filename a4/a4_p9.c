/*
 CH-230-A
 a4_p9.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h> 
#include <stdlib.h>

int prodminmax(int arr[], int n) { 
    /*Declaring and initializing the values of min and max 
    as the first values of the array.*/
    int max, min, i;
    max = arr[0];
    min = arr[0];

    /*In the typical for loop (initial value i=0, i increments until
    i reaches n, where loop breaks) if the max value is smaller then
    the array element [i] then max takes that value. Similarly, if min
    is bigger than the array element [i] then min takes that value.*/
    for(i=0; i<n; i++){
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    }
    //Declaring and computing the product variable
    int product;
    product = min * max;
    //Returning its value
    return product;
    } 
    

int main() { 
    //Number of integers to be stored in array & counter variable i
    int n, i;
    scanf("%d", &n); 
    //We allocate memory for the array of n amount of integers
    int *arr;
    arr = (int *) malloc(sizeof(int) * n); 
    //Check if the allocation worked by checking if return is NULL
    if (arr == NULL)
        exit (1);
    //Reading all the array elements from the user using for loop
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Product of min and max values:%d\n", prodminmax(arr, n));
    //Deallocationg memory
    free(arr); 

    return 0; 
}
