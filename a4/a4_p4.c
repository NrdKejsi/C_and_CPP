/*
 CH-230-A
 a4_p4.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */
#include <stdio.h>

int count_consonants(char str[]){
    int i, nr_of_cons;
    nr_of_cons = 0;
    for(i=0; str[i] != '\0'; i++){
        /*using char c to represent str[i] for a shorter and more
        organized code.*/
        char c = str[i];
        /*We check that c is not some random symbol but a character, and
        if it is a letter, we check that it's not a vowel (both lowercase
        and uppercase). If not a vowel, it means it's a consonant, so the
        number of consonants variable should increment.*/
        if((c > 'a' && c < 'z') || (c > 'A' && c < 'Z')){
            if(c!= 'a' && c!= 'e' && c!= 'i' && c!= 'o' && c!= 'u' &&
            c!= 'y' && c!= 'A' && c!= 'E' && c!= 'I' && c!= 'O' && 
            c!= 'U' && c!= 'Y')
                nr_of_cons++;
        }
    }
    return nr_of_cons;
}

int main(){
    //Declaring the string and the variables i and nr_of_cons
    char string[100];
    int nr_of_cons;
    /*Writing a while loop that will run while true. (value not 0)*/
    while(1){
        //Reading a string
        fgets(string, sizeof(string), stdin);
        /*The loop breaks under the condition that the string entered
        is not empty (so its first value is not a newline char.)*/
        if(string[0] == '\n')
            break;
        //Using the count_consonants function to find nr_of_cons
        nr_of_cons = count_consonants(string);
        //Printing the result
        printf("Number of consonants=%d\n", nr_of_cons);
    }

    return 0;
}