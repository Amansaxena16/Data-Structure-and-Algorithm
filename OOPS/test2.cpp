// writing a program to add and see balance of an account using Getter and Setter in OOPs!!
#include<iostream>
using namespace std;

class Account{
    private:
    int balance;

    // Default Constructor
    public:Account(){
        cout << "Constructor is invoved!!" << endl;
    }

    // Parameteried Constructor 
    Account(int balance){
        this -> balance = balance;
    }

    public:
    // Setter as setBalance
    void setBalance(int bal){

        if(bal >= 0){
            balance = bal;
        }
        else{
            cout << "Balance can't be Below 0!!" << endl;
        }
    }

    // Getter as getBalance 
    int getBalance(){
        return balance;
    }
};

int main(){
    
    Account acc(1000);
    // acc.setBalance();
    cout << "Account Balance is : " << acc.getBalance() << endl;
    return 0;
}