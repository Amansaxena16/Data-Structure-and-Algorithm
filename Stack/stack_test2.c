// writing a program to create a stack using array!!
#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *data;
};

int isFull(struct stack *st){
    if((st -> top) == (st -> size) -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack *st){
    if(st -> top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *st){
    if(!isFull(st)){\
        int data;
        printf("Enter your data : ");
        scanf("%d",&data);

        st -> top++;
        st -> data[st -> top] = data;
        printf("You have successfully entered your data!!\n");
    }
}

void peek(struct stack *st){
    if(!isEmpty(st)){
        printf("Your Data : %d\n",st -> data[st -> top]);
    }
    else{
        printf("You stack is Empty!!\n");
    }
}

void pop(struct stack *st){
    if(!isEmpty(st)){
        st -> data[st -> top] = 0;
        st -> top--;
    }
    else{
        printf("Stack is Empty!!\n");
    }
}

int main(){
    
    struct stack *st =  NULL;
    st = malloc(sizeof(struct stack));

    st -> size = 6;
    st ->  top = -1;
    st -> data = malloc((st -> size) * sizeof(int));

    push(st);
    push(st);
    push(st);
    peek(st);
    pop(st);
    peek(st);
    return 0;
}