// writing a program to create a copy of linked list with same random pointers!!
#include<iostream>
using namespace std;

class Node{
    int data;
    Node *next;
    Node *random;

    Node(int data){
        this -> data = data;
        next = NULL;
        random = NULL;
    }
};  

class List1{
    Node *head;
    Node *tail;

    List1(){
        head = NULL;
        tail = NULL;
    }

    void push_back(int data){
        
    }
};

int main(){
    
    
    return 0;
}