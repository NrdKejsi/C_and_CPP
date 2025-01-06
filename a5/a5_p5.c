/*
 CH-230-A
 a5_p5.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

double scalar_product(double v[], double w[], int size){
    int i;
    double prod, sum_of_prod;
    sum_of_prod = 0;//Initializing sum as 0
    for(i=0; i<size; i++){
        //calculating the product of 2 elements from each array
        prod = v[i] * w[i];
        //Adding that product to the sum repeatedly
        sum_of_prod += prod;
    }
    return sum_of_prod;//returning sum (scalar product)
}

void smallest_comp(double v[], int size){
    int i;
    int pos = 0;
    /*Starting the smallest value as the 1st one and checking each
    element after it if its smaller.*/
    double smallest = v[pos];
    for(i=0; i<size; i++){
        if(v[i] < smallest){
            //Replacing the smallest value vbl if condition is met
            pos = i;
            smallest = v[pos];
        }
    }
    printf("The smallest = %lf\n", smallest);
    printf("Position of smallest = %d\n", pos);
}

void largest_comp(double v[], int size){
    int i;
    int pos = 0; 
    /*Starting the largest value as the 1st one and checking each
    element after it if its bigger.*/
    double largest = v[0];
    for(i=0; i<size; i++){
        if(v[i] > largest){
            //Replacing the largest value vbl if condition is met
            pos = i;
            largest = v[pos];
        }
    }
    printf("The largest = %lf\n", largest);
    printf("Position of largest = %d\n", pos);
}

int main(){
    int n, i, idx;
    scanf("%d", &n);

    double *v;
    v = (double *) malloc(sizeof(double) * n);
    //Checking if allocation worked
    if(v == NULL){
        exit(1);
    }
    //Reading each element of v from user
    for(i=0; i<n; i++){
        scanf("%lf", &v[i]);
    }

    double *w;
    w = (double *) malloc(sizeof(double) * n);

    if(w == NULL){
        exit(1);
    }
    
    //Reading each element of w from user
    for(idx=0; idx<n; idx++){
        scanf("%lf", &w[idx]);
    }
    //calling each function
    printf("Scalar product=%lf\n", scalar_product(v, w, n));
    smallest_comp(v, n);
    largest_comp(v, n);
    smallest_comp(w, n);
    largest_comp(w, n);

    //Deallocationg each array
    free(v);
    free(w);
    return 0;
}
