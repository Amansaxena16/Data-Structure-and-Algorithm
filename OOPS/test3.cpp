// writing some basic code using OOPs concepts!!
#include<iostream>
using namespace std;

class Teachers{
private:
    int salary;
public:
    // Constructor
    Teachers(){  // Non-Parameterized constructor
        department = "Law";
    }

    Teachers(string name, string department, string subject, int salary){  // Parameterized Constructor
        this -> name = name;
        this -> department = department;
        this -> subject = subject;
        this -> salary = salary;
    }

    // Properties
    string name;
    string department;
    string subject;

    // Method
    void changeDepartment(string newDepartment){
        department = newDepartment;
    }
    // setter  => Setter is used to set the values in private variables
    void setSalary(int s){
        salary = s;
    }

    // getter => getter is used to get the value from private variables
    int getSalary(){
        return salary;
    }

    void getInfo(){
        cout << name << endl;
        cout << department << endl;
        cout << subject << endl;
        cout << salary   << endl;
    }

    ~Teachers(){
        cout << "Hi, I am Destructor, I delete everything" << endl;
    }
};

class User{
private:
    string oldPassword;
    string newPassword;  // data hiding

public:
    string name;
    string email;
};

int main(){
    
    Teachers t1("shruti","law","crime",5000);

    // printing the value
    t1.getInfo();
    return 0;
}