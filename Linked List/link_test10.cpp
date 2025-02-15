// writing a program to merge two sorted list!!
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

class List1{
public:
    Node *list1Head;
    Node *tail;

    List1(){
        list1Head = NULL;
        tail = NULL;
    }

    void push_back(int data){
        Node *newNode = new Node(data);
        if(list1Head == NULL){
            list1Head = newNode;
            tail = newNode;
            return;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void printList(){
        Node *temp = list1Head;
        while(temp != NULL){
            cout << temp -> data << "->";
            temp = temp -> next;
        }
    }
};

class List2{
public:
    Node *list2Head;
    Node *tail;

    List2(){
        list2Head = NULL;
        tail = NULL;
    }

    void push_back(int data){
        Node *newNode = new Node(data);
        if(list2Head == NULL){
            list2Head = newNode;
            tail = newNode;
            return;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void printList(){
        Node *temp = list2Head;
        while(temp != NULL){
            cout << temp -> data << "->";
            temp = temp -> next;
        }
    }
};

class MergeList{
public:
    void mergeTwoList(Node *list1, Node *list2){
        Node *dummy = new Node(-1);
        Node *head = dummy;
        Node *tail = dummy;

        while(list1 != NULL && list2 != NULL){
            if(list1 -> data <= list2 -> data){
                tail -> next = list1;
                list1 = list1 -> next;
                tail = tail -> next;
            }
            else{
                tail -> next = list2;
                list2 = list2 -> next; 
                tail = tail -> next;
            }
        }

        if(list1 != NULL){
            tail -> next = list1;
        }
        if(list2 != NULL){
            tail -> next = list2;
        }

        Node *temp = head -> next;
        while(temp != NULL){
            cout << temp -> data << "->";
            temp = temp -> next;
        }
        cout << endl;
    }   
};

int main(){
    
    List1 l1;
    l1.push_back(1);
    l1.push_back(2);  
    l1.push_back(4); 

    List2 l2;
    l2.push_back(1);
    l2.push_back(3); 
    l2.push_back(4); 

    l1.printList();
    cout << endl;
    l2.printList();
    cout << endl;


    MergeList ml;
    ml.mergeTwoList(l1.list1Head, l2.list2Head);
    return 0;
}