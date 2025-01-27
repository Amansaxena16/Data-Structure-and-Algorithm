// writing a program to check if number is power of two or not!!
#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    while(n > 2 && n % 2 == 0){
        n = n / 2;
    }

    if(n == 2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    int n = 16;
    cout << isPowerOfTwo(n) << endl;
    return 0;
}