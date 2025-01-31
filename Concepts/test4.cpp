// writing a program to find the HCF!!
#include<iostream>
using namespace std;

void findHCF(int n, int m){
    int num = 0;
    if(n > m){
        n = m;
    }

    for(int i = 1; i < n; i++){
        if(n % i == 0 && m % i == 0){
            num = i;
        }
    }

    cout << "Largest GCD : " << num << endl;
}

int main(){
    
    int n = 20;
    int m = 28;

    findHCF(n,m);
    return 0;
}