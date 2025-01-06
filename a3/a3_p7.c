/*
 CH-230-A
 a3_p7.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h> 

void print_form(int n, int m, char c){
    /*Declaring variables that will assist in the for loops.*/
    int i, line;

    /*Decrementing the value of m because in the loop it will be
    incremented for every line.*/
    m--;

    /*We need a nested loop: an outside loop that will repeatedly
    increment m and then print a new line, and another loop inside
    prints the character c repeatedly (m times). */
    for(line=0 ; line<n ; line++){
        m++;
        //Printing the character (m) amount of times
        for(i=0 ; i<m ; i++){
        printf("%c", c);
        }
        
    /*This way the trapezoid has a height of n.*/
    printf("\n");
    }

}

int main(){
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    /*Using getchar() to read the return key so it doesn't interfere with the
    c input.*/
    char c;
    getchar();
    scanf("%c", &c);

    print_form(n, m, c);

}
