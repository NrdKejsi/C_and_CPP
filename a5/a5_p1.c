/*
 CH-230-A
 a5_p1.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

//The function is void bc it doesn't return a value
void triangle(char ch, int n){
    int i, row;//counter variables
    /*We set the number of columns to the integer n that is
    entered. Number of columns = number of rows. */
    int cols = n;
    //Iterate through each column and row to print the character
    for(row=0; row<n; row++){
        for(i=0; i<cols; i++){
            printf("%c", ch);
        }
    cols = cols - 1;//Decrementing columns for triangle shape
    printf("\n");
    }
}

int main(){
    //Scanning an integer n and character ch
    int n;
    scanf("%d", &n);
    char ch;
    getchar();//for \n line
    scanf("%c", &ch);
    //calling function to print the shape
    triangle(ch, n);
    return 0;
}