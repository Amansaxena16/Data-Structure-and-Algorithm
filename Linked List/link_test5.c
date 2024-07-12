#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void deleteAtPosition(struct node **head){
    struct node *temp = *head;
    int count = 0;
    while(temp -> next != NULL){
        count++;
        temp = temp -> next;
    }
    
    int position;
    printf("Enter the Position you want to delete : ");
    scanf("%d",&position);

    if(position > count){
        printf("Can't delete this position!!");
    }
    else{
        struct node *temp = *head;
        struct node *prev = NULL;

        for(int i = 0; i < position; i++){
            prev = temp;
            temp = temp -> next;
        }
        prev -> next = temp -> next;
        free(temp);
    }
}

void deleteAtLast(struct node **head){
    struct node *current = *head;
    struct node *prev = NULL;
    while(current -> next != NULL){
        prev = current;
        current = current -> next;
    }
    prev -> next = NULL;
    free(current);
}

void deleteAtBeginning(struct node **head){
    struct node *temp = *head;
    *head = temp -> next;
    free(temp);
}

void insertAtPosition(struct node **head){
    struct node *temp = *head;
    int count = 0;
    while(temp -> next != NULL){
        count++;
        temp = temp -> next;
    }
    int position;
    printf("Enter the position you want to insert your new node : ");
    scanf("%d",&position);

    if(position > count){
        printf("you can't insert at this position, out of limit!!");
    }
    else{
        struct node *temp = *head;
        for(int i = 0; i < position - 1; i++){
            temp = temp -> next;
        }
        struct node *newNode = NULL;
        newNode = (struct node*)(malloc(sizeof(struct node)));

        int data;
        printf("Enter your data in this position : ");
        scanf("%d",&data);

        newNode -> data = data;
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }
}

void insertAtLast(struct node **head){
    struct node *newNode = NULL;
    newNode = (struct node *)(malloc(sizeof(struct node)));

    struct node *temp = *head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    int data;
    printf("Enter your data at the last : ");
    scanf("%d",&data);

    temp -> next = newNode;
    newNode -> data = data;
    newNode -> next = NULL;
}

void printing(struct node *head){
    struct node *temp = head;

    while(temp != NULL){
        printf("DATA : %d\n",temp -> data);
        temp = temp -> next;
    }
}

void insertAtBeginning(struct node **head){
    struct node *newNode = NULL;
    newNode = (struct node*)(malloc(sizeof(struct node)));

    int data;
    printf("Enter Your Data in Beginning : ");
    scanf("%d",&data);

    newNode -> data = data;
    newNode -> next = *head;
    *head = newNode;
}

int main(){
    
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head -> data = 7;
    head -> next = NULL;

    insertAtBeginning(&head);
    insertAtBeginning(&head);
    insertAtLast(&head);
    insertAtLast(&head);
    insertAtPosition(&head);
    printing(head);
    printf("------------------------------\n");
    deleteAtBeginning(&head);
    deleteAtLast(&head);
    deleteAtPosition(&head);
    printing(head);
    return 0;
}