/*
CH-230-A
a8_p7.c
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //declaring the final file pointer + allocating it
    FILE *fpointer12 = fopen("merge12.txt", "w");
    //checking if allocation worked
    if(fpointer12 == NULL){
        printf("Error allocating merge file!\n");
        exit(1);
    }
    //declaring the first file pointer + allocating it
    FILE *fpointer1 = fopen("text1.txt", "r");
    //checking if allocation worked
    if(fpointer1 == NULL){
        printf("Error allocating file 1!\n");
        exit(1);
    }
    //declaring string for storing 1st text
    char string1[200];
    //reading each line of 1st file and printing it into merge file
    while(!feof(fpointer1)){
        fgets(string1, 200, fpointer1);
        fputs(string1, fpointer12);
    }
    fprintf(fpointer12, "\n");
    //closing and disassociating the first text file
    fclose(fpointer1);
    //checking if allocation worked
    FILE *fpointer2 = fopen("text2.txt", "r");
    if(fpointer2 == NULL){
        printf("Error allocating file 2!\n");
        exit(1);
    }
    //declaring string for storing 2nd text
    char string2[200];
    //reading each line of 2nd file and printing it into merge file
    while(!feof(fpointer2)){
        fgets(string2, 200, fpointer2);
        fputs(string2, fpointer12);
    }
    //closing and disassociating the 2nd text file and the merge file
    fclose(fpointer2);
    fclose(fpointer12);
    return 0;
}