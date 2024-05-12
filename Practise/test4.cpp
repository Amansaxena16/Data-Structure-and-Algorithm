// Left Rotate on Array by One!!
#include<iostream>
using namespace std;

int main(){

    int arr[6] = {5,6,7,8,9,1};
    int temp = arr[0];

    for(int i = 0; i < 6; i++){
        arr[i] = arr[i+1];
    }
    arr[5] = temp;
    
    cout << "Rotated vaues are : ";
    for(int i = 0; i < 6; i++){
        cout << arr[i] << "\t";
    }
}