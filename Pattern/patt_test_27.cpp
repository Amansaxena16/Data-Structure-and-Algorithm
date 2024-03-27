#include<iostream>
using namespace std;

int main(){
    int count;
    for(int i = 1; i <= 5; i++){
        count = 1;
        for(int j = i; j <= 5; j++){
            cout << count << " ";
            count++;
        }
        for(int k = 1; k < i; k++){
            cout << "*" << " ";
        }
         for(int k = 1; k < i; k++){
            cout << "*" << " ";
        }
        count--;
        for(int l = i; l <= 5; l++){
            cout << count << " ";
            count--;
        }
        cout << "\n";
    }
}