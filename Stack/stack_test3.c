#include<stdio.h>
#include<stdlib.h>
 
struct stack{
    int data;
    struct stack *next;
};

void peek(struct stack *head){
    printf("Data : %d\n",head -> data); 
}

void push(struct stack **head){
    struct stack *newStack =  NULL;
    newStack = (struct stack *) malloc(sizeof(struct stack));

    int data;
    printf("Enter you data : ");
    scanf("%d",&data);

    newStack -> data = data;
    newStack -> next = *head;
    *head = newStack;
}

int main(){
    int size = 6;

    struct stack *head = NULL;
    head = (struct stack *) malloc(sizeof(struct stack));

    head -> data = 99;
    head -> next = NULL;

    peek(head);
    push(&head);
    peek(head);
    return 0;
}