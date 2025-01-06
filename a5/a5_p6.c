/*
 CH-230-A
 a5_p6.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    float *arr;

    scanf("%d", &n);//scanning number of elements
    //Dynamically allocating array
    arr = (float *) malloc(sizeof(float) * n);
    //Checking if result is NULL
    if(arr == NULL){
        exit(1);
    }
    //Scanning each element and storing it in array
    for(i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }
    //Declaring a pointer that points to array's first element
    float *p = arr;
    //For loop goes through each element and stops when it reaches the end
    for(; p < arr + n; p++){
        //If an element encountered is (-),loop breaks & value is printed
        if(*p < 0){
            printf("Before the first negative value: %ld elements\n", p-arr);
            break;
        }
    }
    free(arr);
    
    return 0;
}