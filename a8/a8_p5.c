/*
CH-230-A
a8_p5.c
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //declaring first file pointer
    FILE *fpointer1; 

    /*opening the file the fpointer1 points to and specifying
    we only want to read from it.*/
    fpointer1 = fopen("chars.txt", "r");

    //checking if allocation worked
    if(fpointer1 == NULL){
        printf("Error allocating!");
        exit(1);
    }

    //only reading the first two characters of file:
    char firstTwo[2];
    fread(firstTwo, sizeof(char), 2, fpointer1);
    //evaluating sum of ASCII code values of the first two chars
    int sum;
    sum = firstTwo[0] + firstTwo[1];
    //closing and disassociating the file
    fclose(fpointer1);

    //declaring second file pointer
    FILE *fpointer2;
    /*opening the file the fpointer2 points to and specifying
    we want to create the file, and also read and write in it.*/
    fpointer2 = fopen("codesum.txt", "w");

    //checking if DMA worked
    if(fpointer2 == NULL){
        printf("Error allocating!");
        exit(1);
    }
    //printing the following in the second file
    fprintf(fpointer2, "The sum of the ASCII code values:%d\n", sum);
    //closing and disassociating the file
    fclose(fpointer2);

    return 0; 
} 