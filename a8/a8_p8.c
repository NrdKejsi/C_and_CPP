/*
CH-230-A
a8_p8.c
Kejsi Nuredini
knuredini@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char fileName [80];
    //reading the fileName from the user 
    fgets(fileName, 80, stdin);
    //removing newline character
    fileName[strlen(fileName) - 1] = '\0';
    //opening the file of that name (only for reading)
    FILE *fpointer = fopen(fileName, "r");
    //checking if allocation worked
    if(fpointer == NULL){
        printf("Error allocating file!\n");
        exit(1);
    }
    //variable to keep count of nr of words
    int words = 0;
    //variable to keep see if we already counted a word 
    int alreadyCounted = 0;
    //variable to see if we're reading one of the separating chars
    char sep;
    //loop to read each char of the file until it reaches the end:
    while((sep = fgetc(fpointer)) != EOF){
       if(sep == ' ' || sep == ',' || sep == '?' || sep == '!' || 
        sep == '.' || sep == '\t' || sep == '\r' || sep == '\n'){
            //resetting the alreadyCounted value to 0
            alreadyCounted = 0;
        }
        /*if already counted is 0, that means we just read a
        seperating character. So the char currently being read is
        part of a word. The word count will be incremented and the
        alreadyCounted value will change until a new seperating
        character is encountered.*/
        else if(alreadyCounted == 0){
            alreadyCounted = 1;
            words ++;
        }

    }
    //closing and disassociating the file
    fclose(fpointer);

    //printing the necessary statement
    printf("The file contains %d words.\n", words);
    return 0;
}