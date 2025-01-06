/*
 CH-230-A
 a2_p9.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

int main(){
    //Declaring the char variable c
    char c;
    //Reading the char value c from the user
    scanf("%c", &c);

    /*Using a multiple selection for three possible input oucomes:
    a digit, a letter or other symbol. We will use the corresponding
    values in the ASCII table to check. If the value of c is more than
    or equal to 48 AND less than or equal to 57, than it is a digit.
    The && operator ensures that the condition is met only when both
    expressions are true.*/

    if (48 <= c && c <= 57)
        printf("%c is a digit\n", c);

    /*The following expression includes both lower and upper case
    letters. If c is a lower case letter, it is more than or equal
    to 65 AND less than or equal to 90. If c is an upper case letter,
    its ASCII values is more than or equal to 97 AND less than or
    equal to 122. If any of these two expressions is true, then c is a
    letter and the following statement is printed. This is why we use
    the || operator in this case. */

    else if ( ((65 <= c) && (c <= 90)) || ((97 <= c) && (c <= 122)) )
        printf("%c is a letter\n", c);
    
    /*If c is any other value, it is some other symbol, so the
    following statement will be printed.*/

    else 
        printf("%c is some other symbol\n", c);

    return 0;
}