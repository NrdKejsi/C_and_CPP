/*
 CH-230-A
 a6_p1.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
//type variable temporarily holds 1st value (A) to pass it to 2nd (B)
#define swap(A, B, type) ({type pass = A; A = B; B = pass; })

int main(){
    //Reading two integers and two doubles
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    double x1, x2;
    scanf("%lf %lf", &x1, &x2);

    printf("After swapping:\n");
    swap(n1, n2, int);//swapping two integers
    printf("%d\n", n1);
    printf("%d\n", n2);
    swap(x1, x2, double);//swapping two doubles
    printf("%.6lf\n", x1);
    printf("%.6lf\n", x2);   

    return 0;
}