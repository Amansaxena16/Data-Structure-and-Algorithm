// writing a program to find the sum of n numbers using recursion!!
#include<iostream>
using namespace std;

int findSum(int n){
    if(n == 1){
        return 1;
    }

    return n + findSum(n-1);
}

int main(){
    
    int n = 5;
    cout << findSum(n) << endl;
    return 0;
}