/*
CH-230-A
a8_p6.c
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    //declaring two strings holding file names
    char fileName1[50];
    char fileName2[50];
    //reading each file name from keyboard
    printf("Write each file name: \n");
    fgets(fileName1, sizeof(fileName1), stdin);
    fgets(fileName2, sizeof(fileName2), stdin);
    //deleting the newline character
    fileName1[strlen(fileName1) - 1] = '\0';
    fileName2[strlen(fileName2) - 1] = '\0';
    //declaring a file pointer + allocating it
    FILE *fpointer1 = fopen(fileName1, "r");
    //checking if allocation worked
    if(fpointer1 == NULL){
        printf("Error allocating file 1!\n");
        exit(1);
    }
    //reading the first double number from file 1
    double num1;
    fscanf(fpointer1, "%lf", &num1);
    //closing and disassociating the file
    fclose(fpointer1);
    //declaring a file pointer + allocating it
    FILE *fpointer2 = fopen(fileName2, "r");
    if(fpointer2 == NULL){
        printf("Error allocating file 2!");
        exit(1);
    }
    //reading the second double from file 2
    double num2;
    fscanf(fpointer2, "%lf", &num2);
    //closing and disassociating the file
    fclose(fpointer2);

    //all the variables storing computations
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
    double division = num1 / num2;

    //declaring a file pointer + allocating it
    FILE *fpointer3 = fopen("results.txt", "w");
    //writing all the results into the result.txt file
    fprintf(fpointer3, "The sum is: %lf\n", sum);
    fprintf(fpointer3, "The difference is: %lf\n", difference);
    fprintf(fpointer3, "The product is: %lf\n", product);
    fprintf(fpointer3, "The division result is: %lf\n", division);
    //closing and disassociating the file
    fclose(fpointer3);

    return 0;
}