// writing a program to rotate an array to right by k elements
#include<iostream>
using namespace std;

void rightRotate(int arr[], int n, int k){
    int temp[k];
    int j = 0;
    for(int i = k; i < n; i++){
        temp[j] = arr[i];
        j++;
    }
    for(int i = k; i < n; i++){
        arr[i] = arr[i - k];
    }
    for(int i = 0; i < k; i++){
        arr[i] = temp[i];
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << '\t';
    }
}

int main(){
    
    int arr[6] = {1,2,3,4,5,6};
    int k = 3;
    rightRotate(arr,6,3);
    return 0;
}