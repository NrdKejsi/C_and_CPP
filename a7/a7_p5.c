/*
 CH-230-A
 a7_p5.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

/*the ascend function qsort will use will substract two
elements. If result is +ive, x will come after y.*/
int ascend(const void* x, const void* y){
    return(*(int*)x - *(int*)y);
}

/*the descend function qsort will use will also
 substract two elements. If result is +ive,
 y will come after x. Array will be in the opposite
 order of the one above.*/
int descend(const void* x, const void* y){
    return(*(int*)y - *(int*)x);
}

int main(){
    int n;
    scanf("%d", &n);
    //declaring array with n elements
    int array[n];
    //not dynamically allocating-> problem doesn't specify to do so
    int i;
    //scanning array
    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }

    //loop for continuously reading commands and executing qsort
    char command;
    while(1){
        scanf("%c", &command);
        if(command == 'a'){
            //using function pointer to ascend
            qsort(array, n, sizeof(int), ascend);
            int i;
            //priniting array
            for(i=0; i<n; i++){
                printf("%d ", array[i]);
            }
            printf("\n");
        }

        if(command == 'd'){
            //using function pointer to descend
            qsort(array, n, sizeof(int), descend);
            int i;
            //printing array
            for(i=0; i<n; i++){
                printf("%d ", array[i]);
            }
            printf("\n");
        }
        //quitting execution
        if(command == 'e'){
            break;
        }

    }

    return 0;
}
