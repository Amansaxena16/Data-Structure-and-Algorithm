// writing a program to sort the array using bubble sort in recursion!!
#include<iostream>
using namespace std;

void     bubbleSort(int arr[], int size){

    if(size == 0 || size == 1){
        return ;
    }
    
    for(int i = 0; i < size - 1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    bubbleSort(arr,size-1);
}

int main(){
    
    int arr[7] = {4,2,66,1,14,77,3};
    bubbleSort(arr,7);

    for(int i = 0; i < 7; i++){
        cout << arr[i] << "\t";
    }
    return 0;
}