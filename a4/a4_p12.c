/*
 CH-230-A
 a4_p12.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

/*As long as string not equal to null the loop runs.
 If it is equal to c, that element with index i gets replaced with
 new value e.*/
void replaceAll(char *str, char c, char e) {
    for ( int i = 0; str[i]!='\0'; i++) {
        if ( str[i] == c) {
            str[i] = e;
        }
    }
}

int main() { 
    char string[80];
    //old character, new character
    char old, new;

    printf("Enter string:\n");
    scanf("%s", string); 

    while(strcmp(string, "stop") !=0) {
        printf("character to be replaced:\n");
        scanf("%s", &new); 

        printf("replacing character:\n");
        scanf("%s", &old); 
        
        replaceAll(string, old, new); // replacing the strings 
    }

}
