// Writting a program to remove a number from an index in an array!!
#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[6] = {10,50,30,50,90,100};

    cout << "Enter the Index Number you want to remove : ";
    cin >> n;

    for(int i = n; i < 6; i++){
        arr[i] = arr[i+1];
    }

    for(int i = 0; i < 5; i++){
        cout << arr[i] << "\t";
    }
}