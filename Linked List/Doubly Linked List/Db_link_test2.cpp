// writing a program to learn Doubly Linked List!!
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data){
        this -> data = data;
        next = NULL;
        prev = NULL;
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
    void createList(){
        
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
            newNode -> prev = tail;
            tail = newNode;
        }
    }

    void push_front(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        else{
            head -> prev = newNode;
            newNode -> next = head;
            head = newNode; 
        }
    }

    void pop_front(){
        if(head == NULL){
            cout << "List is Empty!!"<< endl;
            return;
        }

        Node *temp = head;
        head = head -> next;

        if(head != NULL){
            head -> prev = NULL;
        }
        delete(temp);
    }

    void pop_back(){
        if(head == NULL){
            cout << "List is Empty" << endl;
            return;
        }
        Node *temp = tail;
        if(tail == head){
            tail = NULL;
            head = NULL;
        }
        else{
            tail = tail -> prev;
            tail -> next = NULL;
        }

        delete(temp);

    }

    void printList(){
        Node *temp = head;
        while(temp != NULL){
            cout << temp -> data << "->";
            temp = temp -> next;  
        }
        cout << "NULL" << endl;
    }
};

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    ll.push_front(69);
    ll.pop_back();
    ll.pop_front();

    ll.printList();

    return 0;
}