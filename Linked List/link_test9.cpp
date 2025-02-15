// writing a program to detect cycle in linked list!!
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

    bool hasCycle(){
        Node *slow = head;
        Node *fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;

            if(slow == fast){
                return true;
            }
        }
        return false;
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

    ll.printList();

    cout << ll.hasCycle() << endl;
    return 0;
}