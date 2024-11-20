// writing a program to find the power of any number
#include<iostream>
using namespace std;

void myPow(double x, int n){
    double power = 1;

    for(int i = 0; i < n; i++){
        power = power * x;
    }

    cout << power << endl;
}

int main(){
    
    double x = 2.00000;
    int n = -2;
    myPow(x,n);
    return 0;
}