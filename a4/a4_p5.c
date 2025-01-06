/*
 CH-230-A
 a4_p5.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

int count_consonants(char str[]){
    int nr_of_cons = 0;
    char *pointer = str;

    while(*pointer != '\0'){
        char c = *pointer;//for easier-to-read code
    
        if((c > 'a' && c < 'z') || (c > 'A' && c < 'Z')){
            if(c!= 'a' && c!= 'e' && c!= 'i' && c!= 'o' && c!= 'u' &&
            c!= 'y' && c!= 'A' && c!= 'E' && c!= 'I' && c!= 'O' && 
            c!= 'U' && c!= 'Y')
                nr_of_cons++;
        }
        pointer++; //incrementing pointer to move to the next string char
    }
    return nr_of_cons;
}

int main(){
    char string[100];
    int nr_of_cons;
    /*Writing a while loop*/
    while(1){
        //Reading a string
        fgets(string, sizeof(string), stdin);
        //Breaking loop if string entered is empty
        if(string[0] == '\n')
            break;
        //Using the count_consonants function to find nr_of_cons
        nr_of_cons = count_consonants(string);
        //Printing the result
        printf("Number of consonants=%d\n", nr_of_cons);
    }

    return 0;
}
