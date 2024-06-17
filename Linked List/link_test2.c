#include<stdio.h>
#include<stdlib.h>

// Creating structure for node
struct node{
    int data;
    struct node *next;
};

void traverse(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("Data : %d\n",temp -> data);
        temp = temp -> next;
    }
}

void insertAtBeginning(struct node **head){
    int data;
    printf("Enter your data : ");
    scanf("%d",&data);

    struct node *newNode = NULL;
    newNode = malloc(sizeof(struct node));
    
    newNode -> data = data;
    newNode -> next = *head;
    *head = newNode;


}

int main(){
    
    // Declaring Nodes
    struct node *head = NULL;

    //  Creating memory for the node
    head = malloc(sizeof(struct node));

    // Initializing the node
    head -> data = 11;
    head -> next = NULL;

    insertAtBeginning(&head);
    insertAtBeginning(&head);
    traverse(head);

    return 0;
}