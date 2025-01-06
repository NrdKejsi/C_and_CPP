/*
 CH-230-A
 a3_p9.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

/*This function will calculate the sum of double elements with position
2 and 5 in the array. It will also check if the integer n entered by the
user is higher than 5, so that the array has enough values for positions
2 and 5 to be valid. */
double sum25(double v[], int n){
    double sum;

    if(n>5){
        sum = v[2] + v[5];
        return sum;
    }

    else{
        printf("One or both positions are invalid\n");
        /*The problem instructs us to return value -111 if positions
        2 and 5 are not valid.*/
        return -111;
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int i;
    double array[20];
    for(i=0; i<n; i++){
        scanf("%lf", &array[i]);
    }
    
    //Printing the sum of elements with positions 2 and 5
    if(sum25(array, n) != -111)
        printf("sum=%lf\n", sum25(array, n));
    

    return 0;

}
    
