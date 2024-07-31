// writing a program to sort the array using bubble sort!!
#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << "\t";
    }
}

int main(){
    
    int arr[7] = {4,2,66,1,14,77,3};
    bubbleSort(arr,7);
    return 0;
}