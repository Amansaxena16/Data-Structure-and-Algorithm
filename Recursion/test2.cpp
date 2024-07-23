// writing a program to find the power of any number using recursion!!
#include<iostream>
using namespace std;

int findPower(int n, int times){
    
    if(times == 0){
        return 1;
    }
    else{
        return n * findPower(n,times - 1);
    }
}

int main(){
    
    int n;
    int times;

    cout << "Enter a number to find the power : ";
    cin >> n;

    cout << "Enter the value how many times you want to find the power a number : ";
    cin >> times;

    cout << "Power of " << n <<" is : " << findPower(n,times);
    return 0;
}