// writing a program to create a copy of linked list with same random pointers!!
#include<iostream>
using namespace std;

class Node{
public:
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
private:
    Node *head;
    Node *tail;

public:
    List1(){
        head = NULL;
        tail = NULL;
    }

    void push_back(int data){   
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        else{
            tail -> next = newNode;
            tail = newNode; 
        }
    }

    void printList(){
        Node *temp = head;
        while(temp != NULL){
            cout << temp -> data << "->";
            temp = temp -> next;
        }
        cout << "NNULL" << endl;
    }
};

int main(){
    
    List1 l1;
    l1.push_back(7);
    l1.push_back(13);
    l1.push_back(11);
    l1.push_back(10);
    l1.push_back(1);

    l1.printList();
    return 0;
}