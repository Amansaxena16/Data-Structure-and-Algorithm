#include<iostream>
using namespace std;

int main(){
    int number;
    int count = 0
    cout << "Enter a number to add them!! "; 
    cin >> number;

    for(int i = 0; i <= number; i++){
        count = count + i;
    }

    cout <<" Total is " << number;
}