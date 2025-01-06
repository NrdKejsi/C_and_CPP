/*
 CH-230-A
 a5_p7.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h> //Including this for mallloc function
#include <string.h> //for strcpy, strlen and strcat functions 

int main(){
    //Declaring two strings with up to 100 elements
    char string1[100], string2[100];
    //Reading the strings from standard input
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);

    //Removing the \n character from both strings
    string1[strlen(string1) - 1] = '\0';
    string2[strlen(string2) - 1] = '\0';

    //Copying string2(source) into string1(destination)
    strcat(string1, string2);
    //Declaring pointer to char variable named concat
    char *concat;
    /*Since the concatenation is string1, the length of string1
    is going to be the length of our dynamically allocated 
    string 'concat': */
    int length = sizeof(string1);  
    concat = (char *) malloc(sizeof(concat) * length);

    //Copying string1(now source) into concat(destination)
    strcpy(concat, string1);
    
    //Print the result of concetenation
    printf("Result of concatenation: %s\n", concat);
    
    return 0;
}
