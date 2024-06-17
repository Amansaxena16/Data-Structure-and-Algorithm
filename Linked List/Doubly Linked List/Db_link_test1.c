// PROGRAM TO IMIPLEMENT DOUBLY LINKED LIST!!
#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

void insertAtIndex(struct node **head){
    int count = 0;
    struct node *temp = *head;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }

    int index;
    printf("Enter an index to create a new node : ");
    scanf("%d",&index);

    if(index >= count){
        printf("Out of ranage!!");
        return;
    }
    else{
        temp = *head;
        for(int i = 0; i < index - 1; i++){
            temp = temp -> next;
        }
        struct node *newNode = NULL;
        newNode = malloc(sizeof(struct node));

        int data;
        printf("Enter your data in mid node : ");
        scanf("%d",&data);

        newNode -> next =  temp -> next;
        newNode -> data = data;
        newNode -> prev = temp;

        temp -> next = newNode;
        (newNode -> next) -> prev = newNode;
    }
}

void insertAtLast(struct node **head){
    struct node *temp = *head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    struct node *newNode = NULL;
    newNode = malloc(sizeof(struct node));

    temp -> next = newNode;
    newNode -> prev = temp;
    
    int data;
    printf("Enter your data in last node : ");
    scanf("%d",&data);

    newNode -> data = data;
    newNode -> next = NULL; 
}

void printing(struct node **head){
    struct node *temp = *head;
    while(temp != NULL){
        printf("DATA IN NODE : %d\n",temp -> data);
        temp = temp -> next;
    }
}

void insertAtBeginning(struct node **head){
    struct node *newNode = NULL;
    newNode = malloc(sizeof(struct node));

    int data;
    printf("Enter your data in Beginning : ");
    scanf("%d",&data);

    newNode -> prev = NULL;
    newNode -> data = data;
    newNode -> next = *head;

    *head = newNode;
}

int main(){
    
    struct node *head = NULL;
    head = malloc(sizeof(struct node));

    head -> prev = NULL;
    head -> data = 1;
    head -> next = NULL;

    insertAtBeginning(&head);
    insertAtLast(&head);
    insertAtLast(&head);
    insertAtLast(&head);
    insertAtLast(&head);
    insertAtLast(&head);
    insertAtIndex(&head);
    printing(&head);

    return 0;
}