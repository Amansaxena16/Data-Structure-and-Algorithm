#include<iostream>
using namespace std;

int main(){
    char ch;
    for(int i = 1; i <= 3; i++){
        ch = 65;
        for(int j = 1; j <= 3; j++){
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
}