/*
 CH-230-A
 a4_p2.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>

/*This void function will print the characters of the string in
a zigzag manner using their index as an indicator. If the string
element is even (or 0), it should be printed without a space in
front. If it is odd, however, it will be printed with a space.
This is done through the if else statements.*/
void print_output(char string[], int dim){
    int idx;
    for(idx = 0; idx < dim; ++idx){
        /*We write this so that the compiler doesn't print empty
        spaces for the remaining element spots in the array (the
        string has up to 50 elements).*/
        if(string[idx] == '\0')
            break;
        //for odd position elements print with space
        else if(idx % 2 != 0){
            printf(" %c\n", string[idx]);
        }
        //for even position elements print without space
        else{
            printf("%c\n", string[idx]);
        }
    }
}

int main(){
    /*Declaring a string then reading it from user. Using fgets to
    include spaces in the string.*/
    char string[50];
    fgets(string, sizeof(string), stdin);
    //Removing newline character.
    string[strlen(string)-1]='\0';
    //Using our function declared above.
    print_output(string, 50);
    return 0;
}