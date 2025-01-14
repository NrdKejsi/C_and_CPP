/*
CH-230-A
a8_p9.c
Kejsi Nuredini
knuredini@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function to join files together
void morphMerge(FILE *fileCreator, char *whichFile){
    //amount of chars to take at once
    char lineBuffer[64];
    memset(lineBuffer, '\0', sizeof(lineBuffer));

    //size_t nitems
    int lineLen;

    FILE *fileOpener = fopen(whichFile, "r");
    //checking if opening file failed
    if (fileOpener == NULL){

        printf("The chosen file couldn't be opened!\n");
        exit(1);

    }

    else{

        //OL = Long offset, SEEK_ = whence.
        //Front -> End loop all the while finding the size in each iteration.
        fseek(fileOpener , 0L , SEEK_END);
        lineLen = ftell(fileOpener);
        fseek(fileOpener, 0L , SEEK_SET);

        // going through the file until EOF.
        while(fread(lineBuffer, 1, lineLen, fileOpener) && lineLen > 0){
            
            /*if a line is less than 128 chars, copy only that much to the file
            and not the remaining white spaces*/
            if(lineLen < 64){
            
                for(int i = 0; i < lineLen; i++){

                    //Shows in CMD.
                    printf("%c", lineBuffer[i]);

                }

                printf("\n");

                //Writes to the file.
                fwrite(lineBuffer, lineLen, 1, fileCreator);
                //Reset to 0 for the next line.
                lineLen = 0;
            
            } 

            /* if the line has more than 128 chars, and since the buffer can
            only hold 128, only copy 128 to the file and then continue.*/
            else{

                for(int i = 0; i < lineLen; i++){

                    //Shows in CMD.
                    printf("%c", lineBuffer[i]);

                }

                printf("\n");

                //Writes to the file.
                fwrite(lineBuffer, 64, 1, fileCreator);
                lineLen = lineLen - 64;
            
            }

        }

        //Each files are to be separated by a new line.
        fputc('\n', fileCreator);
        fclose(fileOpener);

    }
   
}


int main(){

    char whichFile[100];

    int howMany;
    scanf("%d", &howMany);

    FILE *fileCreator = fopen("output.txt", "w");

    if(fileCreator == NULL){

        printf("The chosen file couldn't be created!\n");
        exit(1);

    }

    getchar();

    printf("Concating the content of %d files ...\n", howMany);
    printf("The result is:\n");

        // opening only the specified number of files.
        for(int i = 0; i < howMany; i++){

            fgets(whichFile, 100, stdin);
            whichFile[strcspn(whichFile, "\n")] = 0;

            morphMerge(fileCreator, whichFile);

        }

        fclose(fileCreator);
        printf("The result was written into output.txt\n");

    return 0;

}
