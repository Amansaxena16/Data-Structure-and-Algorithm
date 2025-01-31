// writing a program to find the factorial of a number using recursion!!
#include<iostream>
using namespace std;

int findFactorial(int n){
    if(n == 1){
        return 1;
    }

    return n * findFactorial(n-1);
}

int main(){
    
    int num = 5;
    cout << findFactorial(num) << endl;
    return 0;
}