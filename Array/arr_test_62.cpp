// writing a program to move all the zeros to the end of the array while maintaining the order of the non-zero elements!!

#include<iostream>
using namespace std;

void moveZeroes(int arr[], int n){
    int ptr = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i],arr[ptr++]);
        }
    }

    // printing the array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[10] = {4,2,4,0,0,3,0,5,1,0};
    moveZeroes(arr,10);

    return 0;
}