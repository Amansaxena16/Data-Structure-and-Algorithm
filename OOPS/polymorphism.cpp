#include<iostream>
using namespace std;

// Constructor Overloading
class Student{
public:
    string name;

    Student(){
        cout << "called - Non-Parameterized" << endl;
    }

    Student(string name){
        cout << "Called - Parameterized" << endl;
        this -> name = name;
    }
};

// Function Overloading
class Print{
public:

    void show(int x){
        cout << "int x : " << x << endl;
    }
    void show(string name){
        cout << "string name : " << name << endl;
    }
};

// Function OverRiding
class Parent{
public:
    void getInfo(){
        cout << "Parent class : " << endl;
    }
};

class Child : public Parent{
public:
    void getInfo(){
        cout << "Child Class : " << endl;
    }
};

int main(){
    
    Student s1("Shilja");
    Print p1;
    p1.show("shilja");

    Parent p2;
    p2.getInfo();
    return 0;
}