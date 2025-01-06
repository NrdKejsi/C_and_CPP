/*
 CH-230-A
 a6_p4.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#define INTERMEDIATE

int main(){
    int n, i;
    scanf("%d", &n);

    //Declaring two vectors with n elements
    int vector1[n];
    int vector2[n];
    //Scanning each element of vector1
    for(i = 0; i < n; i++){
        scanf("%d", &vector1[i]);
    }
    //Scanning each element of vector1
    for(i = 0; i < n; i++){
        scanf("%d", &vector2[i]);
    }
    //If INTERMEDIATE is defined, the following code is executed
    #ifdef INTERMEDIATE
    printf("The intermediate product values are\n");
    #endif

    /*We'll declare a variable scalar ouside of a loop and use 
    the loop to find the product between each vector element of the
    same position and add it to the scalar variable.*/
    int scalar = 0;
    for(i = 0; i < n; i++){
        int prod = vector1[i] * vector2[i];
        #ifdef INTERMEDIATE
        printf("%d\n", prod);
        //print intermediate values if the directive is defined
        #endif
        scalar += prod;
    }
    //Printing the scalar product
    printf("The scalar product is: %d\n", scalar);

    return 0;
}
