// writing a program to sort a array using selection sort
#include<iostream>
using namespace std;

void sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    // printing the values
    for(int i = 0; i < 8; i++){
        cout << i << '\t';
    }
}

int main(){
    int n =8;
    int arr[n] = {6,3,1,3,8,6,7,0};
    sort(arr,n);
    return 0;
}