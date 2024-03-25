#include<iostream>
using namespace std;

int main(){
    int i;
    for(i = 1; i <= 4; i++){
        for(int j = i; j <= 3; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << "\n";
    }   
}