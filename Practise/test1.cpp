// Writting a program to enter any digit at 3rd Index in the array!!
#include<iostream>
using namespace std;

int main(){
    int arr[6] = {20,50,30,60,90};

    for(int i = 6; i > 3; i--){
        arr[i] = arr[i-1];
    }

    arr[3] = 123;

    cout << "Array : ";
    for(int i = 0; i < 6; i++){
        cout << arr[i] << "\t";
    }

}