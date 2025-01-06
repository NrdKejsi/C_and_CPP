/*
 CH-230-A
 a4_p7.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

/*This function will return a shape (Matrix), and it takes as
 arguments the two dimensional array matrix that takes up to 30
 columns and 30 rows. */
void put_matrix(int matrix[30][30], int cols, int rows) {
    printf("The entered matrix is:\n");
    /*r will be used as a counter variable for counting rows.
    This is the outer loop. The inner loop counts columns 
    using counter variable c. */
    int r;
    for (r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            printf("%d", matrix[r][c]);
            /*we use this to add a space between values in each row,
            except the last one*/
            if (c < cols) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

/*This function returns the values under the main diagonal, leaving
number of rows unspecified.*/
void under_main_diagonal(int matrix[][30], int cols, int rows) {
    printf("Under the main diagonal:\n");
    for (int r = 1; r < rows; ++r) {
        /*The values in the diagonal are in the column position of
        rows-1, so by writing (r-1) we print only the values under
        the diagonal. We print a space in between the values.*/
        for (int c = 0; c < r && c < cols; ++c) {
            printf("%d", matrix[r][c]);
            if  (c < (r - 1) || r != (c - 1)) {
                printf(" ");
            }
        }
    }
    printf("\n");
}

int main() {
    //n will represent number of columns and rows
    int n;
    scanf("%d", &n);
    //counter variables for the loops and matrix (up to 30 cols/rows)
    int r;
    int c;
    int Matrix[30][30];
    //Nested loop to read matrix values
    for (r = 0; r < n; ++r) {
        for (c = 0; c < n; ++c) {
            scanf("%d", &Matrix[r][c]);
        }
    }
    /*Calling the functions above to put out matrix and the values
    under the main diagonal.*/
    put_matrix(Matrix, n, n);
    under_main_diagonal(Matrix, n, n);

    return 0;
}