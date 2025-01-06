/*
 CH-230-A
 a7_p2.c
 Kejsi Nuredini
 knuredini@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

//defining node as a structure with 3 fields
struct Node{
    char data;
    struct Node* next;
    struct Node* prev;
};

//defining global variable - pointer to first element
struct Node* head;

//function to add node to the front of the list:
void addToFront(char c){
    //creating a new node
    struct Node* new;
    //dynamically allocating it and checking if it worked
    new = (struct Node*) malloc(sizeof(struct Node));
    if(new == NULL){
        printf("Error allocating memory!\n");
        return;
    }
    //giving each field a value
    new->data = c;
    new->next = NULL;
    new->prev = NULL;
    //in the case that the list is empty:
    if(head == NULL){
        head = new;
        return;
    }
    else {
       new->next = head;
       head->prev = new;
       head = new;
       return;
    }
}

//function to remove all specific chars from the list:
void removeThisChar(char c){
    //declaring a local variable (ptr) for transversing through list
    struct Node *trans;
    trans = head;
    //declaring a count int which will give the number of nodes
    int firstCount = 0;
    //quick loop to count nodes of the list before removing any
    while(trans){
        firstCount++;
        trans = trans->next;
    }
    //resetting trans pointer
    trans = head;

    while(trans){
        if(trans->data == c){
            //if its the first element we want to remove
            if(trans == head){
                head = trans->next;

                /*if there was more than one element in the list
                previously, then the new head is not empty. In
                this case we specify that there is no node before
                head.*/
                if(head != NULL){
                    head->prev = NULL;
                }
            }
            else {
                trans->prev->next = trans->next;
                trans->next->prev = trans->prev;
            }
            struct Node* toFree;
            toFree = trans;
            trans = trans->next;
            free(toFree);
        }
        else{
            //we continue transversing through the loop
            trans = trans->next;
        }
    }
    //defining a new struct list pointer and count integer
    trans = head;
    int secondCount = 0;
    /*writing a quick loop to check if the new list has the same
    number of nodes. If it does, that means the character was not
    in the list.*/
    while(trans){
        secondCount ++;
        trans = trans->next;
    }

    if(firstCount == secondCount)
        printf("The element is not in the list!\n");
    
}

//function to print all elements of the list
void printList(){
    //declaring a local variable (ptr) for transversing through list
    struct Node* trans;
    trans = head;

    //while it is not NULL the while loop runs
    while(trans){
        printf("%c ", trans->data);
        //moving on to the next node
        trans = trans->next;
    }

    printf("\n");
}

//print the list backwards
void printBackwards(){
    struct Node* trans;
    trans = head;

    //moving our trans pointer to the last node
    while(trans->next){
        trans = trans->next;
    }
    //loop runs while trans pointer is not NULL
    while(trans){
        printf("%c ", trans->data);
        //moving on to node before this one
        trans = trans->prev;
    }
    
    printf("\n");
}

int main(){
    //setting head as null bc list is initially empty
    head = NULL;
    int x;
    char c;
    struct Node* trans; //for freeing memory in case 5
    //a while loop to read each int/char and operate on the list
    while(1){
        scanf("%d", &x);
        switch(x){
            case 1: 
                getchar();//so as to not include the \n in list
                scanf("%c", &c);
                addToFront(c);
                break;
            case 2:
                getchar();//so as to not include the \n in list
                scanf("%c", &c);
                removeThisChar(c);
                break;
            case 3:
                //print the list:
                printList();
                break;
            case 4:
                //print the list backwards:
                printBackwards();
                break;
            case 5:
                //trans pointer starts off pointing at 1st node
                trans = head;
                //creating a temporary ptr to free each node
                struct Node* temp;
                while(trans){
                    temp = trans;
                    //moving on to next node
                    trans = trans->next;
                    free(temp);
                }
                free(head);
                return 0;
                break;
        }
    }
}
