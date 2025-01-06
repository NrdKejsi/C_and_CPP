/*
 CH-230-A
 a4_p11.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int countinsensitive(char *str, char c) {
    int occurrences = 0;
    /*This loop counts the oocurences of char c in string. 
    Loop ends when the \n character is encountered.*/
    while (*str != '\n') {
        if (toupper(*str) == toupper(c))
            occurrences++;
        str++;
    }
    //The function returns the number of occurrences
    return occurrences;
}

int main() {
    char *string_1, *string_2;
    int length1, length2;
    //This is the greatest length the string could go to
    length1 = 50;
    //Dynamic memory allocation part
    string_1 = (char *)malloc(sizeof(char) * length1);
    //Checking if the return of the memory allocation is NULL
    if (string_1 == NULL)
        exit(1);

    //Reading string from keyboard:
    printf("Enter string:\n");
    fgets(string_1, length1, stdin);

    length2 = strlen(string_1) + 1; // Include space for null terminator
    string_2 = (char *)malloc(sizeof(char) * length2);

    if (string_2 == NULL)
        exit(1);
    //We are copying the strings
    strcpy(string_2, string_1);
    //Deallocating
    free(string_1);
    printf("\n");
    //Calling the function for each character
    int count_b = countinsensitive(string_2, 'b');
    int count_H = countinsensitive(string_2, 'H');
    int count_8 = countinsensitive(string_2, '8');
    int count_$ = countinsensitive(string_2, '$');
    int count_u = countinsensitive(string_2, 'u');
    
    //Printing occurrences:
    printf("Occurrences of 'b': %d\n", count_b);
    printf("Occurrences of 'H': %d\n", count_H);
    printf("Occurrences of '8': %d\n", count_8);
    printf("Occurrences of '$': %d\n", count_$);
    printf("Occurrences of 'u': %d\n", count_u);
    //Deallocating last string
    free(string_2);
    
    return 0;
}