/*
 CH-230-A
 a3_p4.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>

int position(char str[], char c){
    int idx;
    /*Loop until end of string*/
    /*Correction: Since the loop does nothing, then we need to
    add a semicolumn instead of curly braces at the end. The
    reason 0 was printed was because the return index was included
    inside the loop. By adding the semicolumn the return index is no
    longer in the loop, and the issue is fixed. */
    for (idx=0; str[idx]!=c && str[idx] != '\0'; ++idx);
            /*do nothing*/

    return idx;
    
        
}

int main(){
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
    return 0;
}