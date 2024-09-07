// writing a program to rotate the array to left side by one step!!
#include<iostream>
using namespace std;

void rotate(int arr[], int n){
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i - 1] = arr[i];
    }
    arr[n-1] = temp;

    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
}

int main(){
    
    int arr[6] = {1,2,3,4,5,6};
    rotate(arr,6);
    return 0;
}