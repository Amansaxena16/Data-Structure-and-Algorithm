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

    void push_front(int data){
        Node *newNode = new Node(data); // creating a Node

        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        else{
            newNode -> next = head;
            head = newNode;
        }
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

    void pop_front(){
        if(head == NULL){
            cout << "Link List is Empty!!" << endl;
            return;
        }
        else{
            Node *temp = head;
            head = head -> next;
            temp -> next = NULL;
            delete(temp);
        }
    }

    void pop_back(){
        if(head == NULL){
            cout << "Link List is Empty" << endl;
            return;
        }
        else{
            Node *temp = head;

            while(temp -> next != tail){
                temp = temp -> next;
            }
            temp -> next = NULL;
            tail -> next = NULL;
            delete(tail);
            tail = temp;
        }
    }
    
    void printList(){
        Node *temp = head;

        while(temp != NULL){
            cout << temp -> data << "-> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    
    List ll;
    // push front
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    // push back
    ll.push_back(4);

    // pop front
    ll.pop_front();

    // pop back
    ll.pop_back();

    ll.printList();
    return 0;
}