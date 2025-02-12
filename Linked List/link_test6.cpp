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
    // TC -O(1)
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
    // TC - O(1)
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
    // TC - O(1)
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
    // TC - O(n)
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
    // TC - O(n)
    void insert(int data, int position){
        Node *newNode = new Node(data);
        int count = 1;
        Node *temp = head;

        if(position < 0){
            cout << "Invalid Posistion" << endl;
            return;
        }

        if(position == 0){
            push_front(data);
            return;
        }

        while(count != position - 1 && temp != NULL){
            temp = temp -> next;
            count++;
        }

        if(temp == NULL){
            cout << "Invalid Position" << endl;
        }

        newNode -> next = temp -> next;
        temp -> next = newNode;
    }

    // TC - O(n)
    void search(int data){
        int count = 0;
        Node *temp = head;

        while(temp != NULL){
            if(temp -> data == data){
                cout << "Value is on " << count << " Position!!" << endl;
                return;
            }   
            count++;
            temp = temp -> next;
        }

        cout << "Not found!!" << endl;
    }

    // TC - O(n)
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
    ll.push_front(4);
    ll.push_front(5);
    ll.push_front(6);

    // push back
    ll.push_back(7);

    // pop front
    ll.pop_front();

    // pop back
    ll.pop_back();

    // insert
    ll.insert(69,3);

    // search
    ll.search(2);

    ll.printList();
    return 0;
}