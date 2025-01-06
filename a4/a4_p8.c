/*
 CH-230-A
 a4_p8.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

void put_matrix(int matrix[30][30], int cols, int rows) {
    printf("The entered matrix is:\n");
    int r;
    for (r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            printf("%d", matrix[r][c]);
            if (c < cols) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void under_secondary_diagonal(int matrix[30][30], int cols, int rows) {
    printf("Under the secondary diagonal:\n");
    /*The outer for loop begins at r=1 and it stops if r
    equals number of rows.*/
    for (int r = 1; r < rows; r++) { 
        /*The inner for loop continues while c (initially =0)
        is smaller than columns.*/
        for (int c = 0; c < cols; c++) {
            //if the value is under the secondary diagonal:
            if ((r + c) > (rows - 1)) {
                //it's printed:
                printf("%d ", matrix[r][c]);
            }
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    
    int r;
    int c;
    int Matrix[30][30];
    //Nested loop to read matrix values
    for (r = 0; r < n; ++r) {
        for (c = 0; c < n; ++c) {
            scanf("%d", &Matrix[r][c]);
        }
    }
    put_matrix(Matrix, n, n);
    under_secondary_diagonal(Matrix, n, n);

    return 0;
}
