/*
 CH-230-A
 a5_p9.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

//Void function which reads the array elements from user
void read3D(int rows, int colum, int depth, int ***arr){
    int r, c, d;
    //Using nested loops to iterate through the rows,columns & depths
    for(r=0; r<rows; r++){
        for(c=0; c<colum; c++){
            for(d=0; d<depth; d++){
                scanf("%d", &arr[r][c][d]);
            }
        }
    }
}
//Void unction which prints the 2D sections
void print2D(int rows, int colum, int depth, int ***arr){
    int r, c, d;
    /*Each section is in the same depth, so the most outer loop
    will be the depth one(where d increments).*/
    for(d=0; d<depth; d++){
        //d+1 -> because d starts at 0 whereas the section starts at 1
        printf("Section %d:\n", d+1);
        //Next loop is rows, after that columns
        for(r=0; r<rows; r++){
            for(c=0; c<colum; c++){
                printf("%d ", arr[r][c][d]);
            }
            printf("\n");         
        }
    }
}

int main(){
    //Reading the dimensions of the 3D-array
    int rows, colum, depth;
    scanf("%d %d %d", &rows, &colum, &depth);

    //Counter variables for loops
    int i, j;
    //Dynamicaly allocating the 3D array
    int ***array;
    array = (int ***) malloc(sizeof(int **) * rows);
    if(array == NULL)
        exit(1);
    //Using a nested loop to walk through each depth of each column
    for(i=0; i<rows; i++){
        array[i] = (int **) malloc(sizeof(int *) * colum);
        if(array[i] == NULL)
            exit(1);
        for(j=0; j<colum; j++){
            array[i][j] = (int *) malloc(sizeof(int) * depth);
            if(array[i][j] == NULL)
                exit(1);
        }
    }
    //Calling the read3D function to read the array elements
    read3D(rows, colum, depth, array);
    //Printing the 2D sections:
    print2D(rows, colum, depth, array);

    //Deallocating the 3D array
    for(i=0; i<rows; i++){
        for(j=0; j<colum; j++){
            free(array[i][j]);
        }
        free(array[i]);
    }
    free(array);

    return 0;
}