/*
 CH-230-A
 a5_p4.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

 void divby5(float arr[], int size){
    int i;
    for(i=0; i<size; i++){
        //Each array element is replaced by itself divided by 5
        arr[i] = arr[i] / 5;
    }
}

int main(){
    int n, idx;
    int i, j;
    scanf("%d\n", &n);
    
    float *array;
    array = (float *) malloc (sizeof(float) * n);
    
    //Checking if NULL and exiting with value 1 if so
    if(array == NULL){
        exit(1);
    }
    //Scanning each element of array
    for(idx=0; idx<n; idx++){
        scanf("%f", &array[idx]); 
    }
    //Printing each element with a precision point of 3 decimals
    printf("Before:\n");
    for(i=0; i<n; i++){
        printf("%.3f ", array[i]);
    }

    printf("\nAfter:\n");
    
    //Using the function we defined above to print new elements
    divby5(array, n);
    for(j=0; j<n; j++){
        printf("%.3f ", array[j]);
    }
    //Deallocating the array data
    free(array);
    return 0;
}
