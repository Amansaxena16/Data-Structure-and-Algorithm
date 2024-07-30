// writing a program to find that an array is sorted or not using recursion!!

#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size <= 1){
        return true;
    }
    else{
        int n = size - 1;
        if(arr[n] >= arr[n-1]){
            isSorted(arr, size - 1);
        }
        else{
            return false;
        }
    }
}

int main(){
    
    int arr[5] = {2,7,6,7,9};
    if(isSorted(arr,5)){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}