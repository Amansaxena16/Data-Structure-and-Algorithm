// writing a program to swap the alternate number with in the array!!
#include<iostream>
using namespace std;

void swapArray(int arr[], int n){
    for(int i = 0; i < n - 1; i=i+2){
        swap(arr[i],arr[i+1]);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main(){

    int arr[4] = {2,4,1,3};
    swapArray(arr,4);
    return 0;
}