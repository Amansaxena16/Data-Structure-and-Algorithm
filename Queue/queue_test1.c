#include<stdio.h>
#include<stdlib.h>

struct queue{
    struct queue *next;
    int data;
    struct queue *prev;
};

void printing(struct queue **first){
    struct queue *temp = *first;
    while(temp != NULL){
        printf("Queue Data : %d\n",temp -> data);
        temp = temp -> prev;
    }
}

void delete(struct queue **first){
    first -> prev = *first;
    (first -> prev) -> next = NULL;
    free(*first);
}

void insert(struct queue **first){
    struct queue *temp = *first;
    while(temp -> prev != NULL){
        temp = temp -> prev;
    }

    struct queue *newNode = NULL;
    newNode = malloc(sizeof(struct queue));

    temp -> prev = newNode;
    newNode -> next = temp;

    int data;
    printf("Enter your data in queue : ");
    scanf("%d",&data);

    newNode -> data = data;
    newNode -> prev = NULL;
}

int main(){

    struct queue *first = NULL;
    first = malloc(sizeof(struct queue));

    first -> next = NULL;
    first -> data = 0;
    first -> prev = NULL;  

    insert(&first);
    insert(&first);
    insert(&first);
    delete(&first);
    printing(&first);
    return 0;
}