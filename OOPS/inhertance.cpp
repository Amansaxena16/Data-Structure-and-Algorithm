#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age){
        this -> name = name;
        this -> age = age;
    }
    Person(){

    }
    void getInfo(){
        cout << "Person Name : " << name << endl;
        cout << "Person Age : " << age << endl;
    }
};

class Student : public Person{
public:
    int rollNo;

    void getInfo(){
        cout << "Name : " << name << endl;
        cout <<  "Age : " << age << endl;
        cout << "Roll Number : " << rollNo << endl;
    }
};

int main(){
    Person p1("Aman", 24);
    Student s1;
    s1.name = "Shilja";
    s1.age = 22;
    s1.rollNo = 1;

    s1.getInfo();
    p1.getInfo();
    return 0;
}