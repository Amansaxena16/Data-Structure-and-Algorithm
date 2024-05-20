// Peak Index in a Mountain Array
#include<iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int size){
    int start = 0; 
    int end = (size-1);

    int mid;
    mid = start + ((end - start)/2);

    while(start < end){
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
            cout << "Index value is : " << mid << " and it's value is " << arr[mid];
            break;
        }
        else if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + ((end - start)/2);
    }
    return -1;
}

int main(){
    int size;
    cout << "Enter the size : ";
    cin >> size;

    cout << "Enter values : ";
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    peakIndexInMountainArray(arr,size);
    
}