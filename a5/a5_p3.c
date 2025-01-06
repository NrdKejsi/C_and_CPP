/*
 CH-230-A
 a5_p3.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <string.h> //needed for the string functions

int count_lower(char* str){
    int count = 0;
    //Checking contents of the string when we don't know the length
    while(*str){ 
        //Each element has to be within this range to be a lowercase
        if(*str >= 'a' && *str <= 'z'){
            //If condition is met, the count oges up by one
            count++;
        }
        //increment string pointer
        str++;
    }
    return count;
}

int main(){
    char string[50];
    //Loop continues to read string until condition of line 31 is met
    while(1){
        fgets(string, sizeof(string), stdin);
        if(string[0]=='\n'){ //string is empty, loop breaks
            break;
        }
        //variable to assign the return value of count_lower function
        int low_chars; 
        low_chars = count_lower(string);
        printf("%d\n", low_chars);
    }
    return 0;
}