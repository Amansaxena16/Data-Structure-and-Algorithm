// writing a program to reverse an linklist!!
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data){
        this -> data = data;
        next = NULL;
    }
};

class List{
private:
    Node *head;
    Node *tail;

public:
    List(){
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
        cout << "NULL" << endl;
    }

    void reserveList(){
        Node *prevPtr = NULL;
        Node *currentPtr = head;
        Node *nextPtr = NULL;

        while(currentPtr != NULL){
            nextPtr = currentPtr -> next;
            currentPtr -> next = prevPtr;
            prevPtr = currentPtr;
            currentPtr = nextPtr;

        }
        head = prevPtr;
        cout << head -> data << endl;
    }
};

int main(){
    
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    ll.printList();

    ll.reserveList();

    return 0;
}