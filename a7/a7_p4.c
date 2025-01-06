/*
 CH-230-A
 a7_p4.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

//this function prints the uppercase string 
void func1(char string[150]){
    int i;
    //this loop runs through the string making it uppercase
    for(i=0; string[i]; i++){
        //using toupper function from ctype.h
        printf("%c", toupper(string[i]));
    }
    printf("\n");
}

//this function prints the lowercase string
void func2(char string[150]){
    int i;
    //this loop runs through the string making it lowercase
    for(i=0; string[i]; i++){
        //using tolower function from ctype.h
        printf("%c", tolower(string[i]));
    }
    printf("\n");
}

//this function prints the opposite case
void func3(char string[150]){
    int i;
    for(i=0; string[i]; i++){
        //if char is lowercase
        if(islower(string[i])){
            //then its turned to upper and printed
            printf("%c", toupper(string[i]));
        }
        //if char is uppercase
        else{
            //then its turned to lower and printed
            printf("%c", tolower(string[i]));
        }
    }
    printf("\n");
}

void finish(char str[100]){
    exit(1);
}

void (*funcArray[4])(char string[]) = {func1, func2, func3, finish};

int main(){
    //reading string and giving it the size limit of 150
    char string[150]; 
    fgets(string, sizeof(string), stdin);

    //removing the newline character from string
    string[strlen(string)-1] = '\0';

    //char that will be read from user
    char command;

    while(1){
        //we put a space before %c because it shows error
        scanf(" %c", &command);
        /* to convert char into integer while decreasing its value
        by one. we do this in order to get position of function in
        string (the first function has position 0) */
        int a = command - '1';

        //calling the function in the array according to command
        (funcArray[a](string));
    }
    return 0;
}