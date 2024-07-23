// writing a program to print the counting using recursion!!
#include<iostream>
using namespace std;

int printCount(int n){
    
    if(n == 0){
        return 1;
    }
    else{
        cout << n << endl;
        printCount(n - 1);
    }
}

int main(){
    
    int n;
    cout << "Enter a number to print its counting : ";
    cin >> n;
    printCount(n);
    return 0;
}