// writing a program to print the number
#include<iostream>
using namespace std;

void printNumber(int n){
    if(n == 1){
        cout << "1" << endl;
        return;
    }

    cout << n << " ";
    printNumber(n-1);
}

int main(){
    
    int n = 100;
    printNumber(n);
    return 0;
}