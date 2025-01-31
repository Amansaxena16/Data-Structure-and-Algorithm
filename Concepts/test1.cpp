// writing a program to find the prime number!!
#include<iostream>
using namespace std;

string findPrime(int num){
    for(int i = 2; i * i < num; i++){
        if(num % i == 0){
            return "Non Prime";
        }
    }

    return "Prime ";
}

int main(){
    
    int num = 2;
    cout << findPrime(num) << endl;
    return 0;
}