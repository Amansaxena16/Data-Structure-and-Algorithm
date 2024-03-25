#include<iostream>
using namespace std;

int main(){
    int count;
    for(int i = 1; i <= 4; i++){
        count = i;
        for(int j = 1; j <= i; j++){
            cout << count << " ";
            count++; 
        }
        cout << "\n";
    }
}