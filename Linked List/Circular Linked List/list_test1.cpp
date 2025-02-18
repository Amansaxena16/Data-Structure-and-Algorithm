// writing a program to learn circular linked list!!
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data){
        this -> data = data;
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
            newNode -> prev = tail;
            tail = tail -> next;
            tail -> next = head;
        }
    }

    void push_front(int data){
        Node *newNode = new Node(data);
        
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        
        head -> prev = newNode;
        newNode -> next = head;
        head = newNode;
        tail -> next = head;
    }

    void pop_front(){
        if(head == NULL){
            cout << "List is Empty" << endl;
            return;
        }
        Node *temp = head;
        head = head -> next;
        tail -> next = head;

        delete(temp);
    }

    void pop_back(){
        if(head == NULL){
            cout << "List is Empty" << endl;
            return;
        }

        Node *temp = tail;
        tail = tail -> prev;
        tail -> next = head;

        delete temp;
    }

    void printList(){

        if(head == NULL){
            cout << "List is Empty" << endl;
        }

        cout << head -> data <<  "->";
        Node *temp = head -> next;
        while(temp != head) {
            cout << temp -> data << "->";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    
    List ll;
    // push back
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);

    // push to head
    ll.push_front(69);

    // pop from head;
    ll.pop_front();

    //pop from back
    ll.pop_back();

    // print the list
    ll.printList() ;
    return 0;
}