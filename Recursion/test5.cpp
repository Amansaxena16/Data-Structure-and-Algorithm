// Question - Say Digit !!
#include<iostream>
#include<string>
using namespace std;

void sayDigit(int number){
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    for(int i = 0; i < 9; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    
    int number;
    cout << "Enter a Number to find it Words : ";
    cin >> number;

    sayDigit(number);
    return 0;
}