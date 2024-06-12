#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr){
    while(ptr != NULL){
        printf("Elements are : %d\n", ptr -> data);
        ptr = ptr -> next;
    }
}

int main(){
    // Creating variable
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Size in the variable
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    // link First node to Second node
    head -> data = 7;
    head -> next = second;

    // Link second node to third node
    second -> data = 11;
    second -> next = third;

    // Link third node to Null
    third -> data = 69;
    third -> next = NULL;

    linkedlistTraversal(head);
    return 0;
}