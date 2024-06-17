// LINKED LIST WITH ALL THE FUNCTION
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void deleteFromIndex(struct node **head){
    struct node *temp = *head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }

    int index;
    printf("Enter an index you want to delete : ");
    scanf("%d",&index);

    if(index >= count){
        printf("Index out of range!\n");
        return;
    }
    else{
        temp = *head;
        struct node *prev = NULL;
        for(int i = 0; i < index; i++){
            prev = temp;
            temp = temp -> next;
        }
        prev -> next = temp -> next;
        free(temp);
    }
}

void deleteFromEnd(struct node **head){
    struct node *temp = *head;
    struct node *prev = NULL;

    while(temp -> next != NULL){
        prev = temp;
        temp = temp -> next;
    }

    free(temp);
    prev -> next = NULL;

}

void deleteFromBeginning(struct node **head){
    struct node *temp = *head;
    *head = temp -> next;
    free(temp);
}

void insertAtIndex(struct node **head){
    int count = 0;
    struct node *temp = *head;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }

    int index = 0;
    printf("Enter a index at which you want to add a new node : ");
    scanf("%d",&index);

    if(index >= count){
        printf("Linked List size : %d\n",count);
        printf("index is out of range!!");
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
        printf("Enter your data in index Node : ");
        scanf("%d",&data);

        newNode -> data = data;
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }
}

void insertAtLast(struct node **head){
    struct node *temp = *head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    int data;
    printf("Enter your data in last node : ");
    scanf("%d",&data);

    struct node *newNode = NULL;
    newNode = malloc(sizeof(struct node));

    newNode -> data = data;
    newNode -> next = NULL;
    temp -> next = newNode;
}

void traverse(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("DATA IN NODE : %d\n",temp -> data);
        temp = temp -> next;
    }
}

void insertAtBeginning(struct node **head){
    int data;
    printf("Enter Your Data at Beginning : ");
    scanf("%d",&data);

    struct node *newNode = NULL;
    newNode = malloc(sizeof(struct node));
    newNode -> data = data;
    newNode -> next = *head;

    *head = newNode;
}

int main(){

    struct node *head = NULL;
    head = malloc(sizeof(struct node));

    head -> data = 4;
    head -> next = NULL;

    insertAtBeginning(&head);
    insertAtBeginning(&head);
    insertAtBeginning(&head);
    insertAtBeginning(&head);
    insertAtLast(&head);
    insertAtIndex(&head);
    traverse(head);
    printf("\n");
    deleteFromBeginning(&head);
    deleteFromEnd(&head);
    traverse(head);
    printf("\n");
    deleteFromIndex(&head);
    traverse(head);
    return 0;
}
