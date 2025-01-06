/*
 CH-230-A
 a4_p6.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

/* We use pointers for the two max values. The biggest one (max_1)
is initialized as arr[0] outside of the loop. The second biggest as arr[1]. */
void two_greatest(int arr[], int dim, int *max_1, int *max_2){
    int i;
    *max_1 = arr[0];
    *max_2 = arr[1];
    

    for(i=1; i<dim; i++){
        if(arr[i]> *max_1){
            *max_2 = *max_1;
            *max_1 = arr[i];
        }
        /*If there is an arr[i] value bigger than max_2 that is
        not max_1, than max_2 will take that value.*/
        else if(arr[i] > *max_2 && arr[i] != *max_1){
            *max_2 = arr[i];
        }
    }
    printf("The greatest value is: %d\n", *max_1);
    printf("The second greatest value is: %d\n", *max_2);
}

int main(){
    int n, i;
    //n = number of array elements
    scanf("%d\n", &n); 

    int *array;
    array = (int*) malloc(sizeof(int) * n);
    
    //Check if the allocation worked by checking if return is NULL
    if (array == NULL)
        exit (1);
    
    //Reading all the array elements from the user using for loop
    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    
    int max_1;
    int max_2;
    
    two_greatest(array, n, &max_1, &max_2);

    free (array);

    return 0;
}
