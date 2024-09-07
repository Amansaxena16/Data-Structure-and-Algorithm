// writing a program to rotate an array by k place to left side!!
#include<iostream>
using namespace std;

void leftRotate(int arr[], int n, int k){
    int temp[k];
    for(int i = 0; i < k; i++){
        temp[i] = arr[i];
    }

    for(int i = k; i < n; i++){
        arr[i - k] = arr[i];
    }

    int j = 0;
    for(int i = n-k; i < n; i++){
        arr[i] = temp[j];
        j++;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << '\t';
    }
}

int main(){
    
    int arr[6] = {1,3,6,11,12,17};
    int k = 4;
    leftRotate(arr,6,4);
    return 0;
}