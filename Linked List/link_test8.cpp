// writiing a program to find the middle of the linked list!!
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

    int printList(){
        int count = 0;
        Node *temp = head;
        while(temp != NULL){
            count++;
            cout << temp -> data << "->";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
        return count;
    }

    int findMiddle(int count){
        Node *temp = head;
        for(int i = 0; i < count / 2; i++){
            temp = temp -> next;
        }
        cout << temp -> data << endl;
        return 0;
    }
};

int main(){
    
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    int count = ll.printList();
    ll.findMiddle(count);
    return 0;
}