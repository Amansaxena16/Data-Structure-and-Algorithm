// writing a program to find the fibonacci series using recursion by giving it N value!!
#include<iostream>
using namespace std;

int fib(int n){

    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
   else{
        int count = fib(n-1) + fib(n-2);
        return count;
    }
}

int main(){
    
    int n;
    cout << "Enter the Number to find the Value till N : ";
    cin >> n;
    fib(n);
    return 0;
}