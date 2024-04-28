// Peak Index in a Mountain Array
#include<iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            cout << "Index value is : " << i << " and it's value is " << arr[i];
        }
    }
}

int main(){
    int size;
    cout << "Enter the size : ";
    cin >> size;

    cout << "Enter values : "
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    peakIndexInMountainArray(arr,size);
    
}