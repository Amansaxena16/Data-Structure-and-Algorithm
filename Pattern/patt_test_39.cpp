#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int j = 0;

    for(int i = 1; i <= n; i++){
        for(j = i; j < n-1; j++){
            cout << "+";
        }
        for(int k = 1; k <= n - j; k++){
            cout << "*";
        }
        for(int j = i; j <= n-j; j++){
            cout << "+";
        }
        cout << "\n";
    }
    
    return 0;
}