/*
 CH-230-A
 a5_p8.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

//This function reads the elements of a matrix from user
void read_matrix(int rows, int col, int **matrix){
    int r, c;
    //Using nested loop
    for(r=0; r<rows; r++){
        for(c=0; c<col; c++){
            scanf("%d", &matrix[r][c]);
        }
    }
}

//This function prints out the matrix
void print_matrix(int rows, int col, int **matrix){
    int r, c;
    //Using nested loop
    for(r=0; r<rows; r++){
        for(c=0; c<col; c++){
            printf("%d ", matrix[r][c]);
        }
        printf("\n");
    }
}

/*This is the function that multiplies the matrices. It takes three
matrices as arguments (C will be the result) and all three dimensions
of the matrices.*/
void matrix_multiply(int **A, int **B, int **C, int n, int m, int p){
    int i, j, k;
    //Using a nested loop to walk through each row/column
    for (i = 0; i<n; i++) {
        for (k=0; k<p; k++) {
            C[i][j] = 0;
            for (j=0; j<m; j++) {
                C[i][k] += A[i][j] * B[j][k];
            }
        }
    }
}

int main(){
    int n, m , p;
    //Scanning the matrices dimensions
    scanf("%d %d %d", &n, &m, &p);

    int i;
    //Dynamically allocating matrix A with n rows and m columns
    int **matrixA;
    matrixA = (int **) malloc(sizeof(int *) * n);
    if(matrixA == NULL)
        exit(1);
    for(i=0; i<n; i++){
        matrixA[i] = (int *) malloc(sizeof(int) * m);
        if(matrixA[i] == NULL)
            exit(1); 
    }

    //Dynamically allocating matrix B with m rows and p columns
    int **matrixB;
    matrixB = (int **) malloc(sizeof(int *) * m);
    if(matrixB == NULL)
        exit(1);
    for(i=0; i<m; i++){
        matrixB[i] = (int *) malloc(sizeof(int) * p);
        if(matrixB[i] == NULL)
            exit(1); 
    }

    //Dynamically allocating matrix C with n rows and p columns
    int **matrixC;
    matrixC = (int **) malloc(sizeof(int *) * n);
    if(matrixC == NULL)
        exit(1);
    for(i=0; i<n; i++){
        matrixC[i] = (int *) malloc(sizeof(int) * p);
        if(matrixC[i] == NULL)
            exit(1);
    }


    //Read and print the matrices
    read_matrix(n, m, matrixA);
    read_matrix(m, p, matrixB);
    matrix_multiply(matrixA, matrixB, matrixC, n, m, p);
    printf("Matrix A:\n");
    print_matrix(n, m, matrixA);
    printf("Matrix B:\n");
    print_matrix(m, p, matrixB);
    printf("The multiplication result AxB:\n");
    print_matrix(n, p, matrixC);


    //Deallocating the memory of matrix A
    for(i=0; i<n; i++){
        free(matrixA[i]);
    }
    free(matrixA);

    //Deallocating the memory of matrix B
    for(i=0; i<n; i++){
        free(matrixB[i]);
    }
    free(matrixB);

    //Deallocating the memory of matrix C
    for(i=0; i<n; i++){
        free(matrixC[i]);
    }
    free(matrixC);

    return 0;
}