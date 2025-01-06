/*
 CH-230-A
 a7_p6.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//declaring structure
struct person{
    char name[30];
    int age;
};

//typical swapping function, takes two struct person type pointers
void toSwap(struct person *first, struct person *second){
    struct person temp;
    temp = *first;
    *first = *second;
    *second = temp;
}

//function takes two pointers without specific type
int comparingInitials(const void* first, const void* second){
    //defining type of pointers
    const struct person* string1 = (const struct person*)first;
    const struct person* string2 = (const struct person*)second;
    int comp;
    //substracting ASCII code of first chars (initials)
    comp = string1->name[0] - string2->name[0] ;
    //in this case second person comes before first
    if(comp > 0){
        return 1;
    }
    //in this case sorting will depend on age
    else if(comp == 0){
        return 0;
    }
    //in this case 1st person comes before 2nd-> sorting doesn't change
    else{
        return -1;
    }
} 

//function takes two pointers without specific type
int comparingAge(const void* first, const void* second){
    //defining type of pointers
    const struct person* int1 = (const struct person*)first;
    const struct person* int2 = (const struct person*)second;
    int comp;
    //substracting two integers (age fields of structure)
    comp = int1->age - int2->age;
    //in this case second person comes before first
    if(comp > 0){
        return 1;
    }
    //in this case sorting will depend on name initial 
    else if(comp == 0){
        return 0;
    }
    //in this case first person will come before second
    else{
        return -1;
    }
}

//bubblesort function takes two function pointers, n & a pointer
void BubbleSort(int(*ptr1)(const void*, const void*)
    , int(*ptr2)(const void*, const void*), int n, 
     struct person *individ)
{
    int swapped;
    while(1){
        swapped = 0;//initial value is 0
        //creating a loop to sort arrays
        for(int i = 1; i <= (n - 1); i++){
            int NameReturn;
            NameReturn = ptr1(&individ[i-1].name, &individ[i].name);
            //if this pair is out of order
            if(NameReturn == 1){
                toSwap(&individ[i-1], &individ[i]);
                swapped = 1;
            }
            //in this case we switch to comparing ages numerically
            else if(NameReturn == 0){
                int AgeReturn = ptr2(&individ[i-1].age, &individ[i].age);
                if(AgeReturn == 1){
                    toSwap(&individ[i-1], &individ[i]);
                    swapped = 1;
                }
            }
        }
        if(!swapped){
            break;
        }
    }
}

void printList(struct person *individ, int n){
    int i;
    for(i=0; i<n; i++){
        //printing names and ages in touples
        printf("{%s, %d}; ", individ[i].name, individ[i].age);
    }
    printf("\n");
}


int main(){
    //reading number of people
    int n;
    scanf("%d", &n);
    getchar();

    struct person People[n];
    //reading the arrays for each field of structure
    int i;
    for(i=0; i<n; i++){
        fgets(People[i].name, sizeof(People[i].name), stdin);
        People[i].name[strlen(People[i].name) - 1] = '\0';
        scanf("%d", &People[i].age);
        getchar();//so the \n character doesn't interfere
    }
    //calling BubbleSort and printList functions
    BubbleSort((int (*)(const void*, const void*))comparingInitials,
           (int (*)(const void*, const void*))comparingAge, n, People);
    printList(People, n);
    BubbleSort((int (*)(const void*, const void*))comparingAge,
           (int (*)(const void*, const void*))comparingInitials, n, People);
    printList(People, n);


    return 0;
}