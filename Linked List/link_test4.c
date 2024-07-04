#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int data;
    struct node *next;
};

void print(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("Data : %d\n",temp -> data);
        if(temp -> next == NULL){
            printf("It is null");
        }
        // printf("add : %d\n",temp -> next);
        temp = temp -> next;
    }
}

void insertAtBeginning(struct node **head){
    int data;
    printf("Enter your data at beginning : ");
    scanf("%d",&data);

    struct node *newNode = NULL;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode -> data = data;
    newNode -> next = *head;
}

int main(){
    
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head -> data = 5;
    head -> next = NULL;

    insertAtBeginning(&head);
    insertAtBeginning(&head);
    insertAtBeginning(&head);
    insertAtBeginning(&head);
    print(head);
    return 0;
}