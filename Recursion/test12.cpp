// writing a program to find the power of an number using recursion!!
#include<iostream>
using namespace std;

int findPower(int a, int b){
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    
    int ans = findPower(a,b/2);
    if(b % 2 == 0){
        return ans * ans;
    }
    else{
        return a * ans * ans;
    }
}

int main(){
    
    int a;
    int b;
    cout << "Enter the value of A : ";
    cin >> a;
    cout << "Enter the value of B : ";
    cin >> b;

    cout << "Power of " << a << " is : " << findPower(a,b);
    return 0;
}