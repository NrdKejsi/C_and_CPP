/*
 CH-230-A
 a3_p10.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>

int main(){
    /*Declaring a string with up to 100 elements.*/
    char one[100];
    /*Reading the string using fgets becaus it allows for reading
    spaces. */
    fgets(one, sizeof(one), stdin);

    one[strlen(one)-1]='\0';

    char two[100];
    fgets(two, sizeof(two), stdin);
    two[strlen(two)-1]='\0';
    
    /*We print the lengths using the function strlen from the 
    string.h header.*/
    printf("length1=%lu\n", strlen(one));
    printf("length2=%lu\n", strlen(two));

    /*We compare the strings using the strcmp function and store the
    outcome in the integer variable named comparison. We do this
    before the strcat function because that function changes the value
    of one. If the comparison was done after strcat(), it would compare
    a new value of one to two.*/
    int comparison;
    comparison = strcmp (one, two);


    strcat(one, two);
    printf("concatenation=%s\n", one);

    /*Declaring a third string and copying two in it using the 
    strcpy() function. */
    char three[100];
    strcpy(three, two);
    printf("copy=%s\n", three);

    /*Depending on the value of comparison, we can print the
    corresponding message on the screen.*/
    if(comparison > 0)
        printf("one is larger than two\n");
    else if(comparison < 0)
        printf("one is smaller than two\n");
    else
        printf("one is equal to two\n");

    /*Reading a character from the user*/
    char c;
    scanf("%c", &c);

    /*Using the strchr function to find the location of the input
    character. The parameters are the array (two) and the char
    variable (c). It returns the location in a pointer, and if
    the character isn't found it returns NULL. In that case we
    print the corresponding statement. */
    char *posit = strchr(two, c);
    if(posit != NULL)
        printf("position=%ld\n", posit - two);
    
    else
        printf("The character is not in the string\n");

    return 0;
}
