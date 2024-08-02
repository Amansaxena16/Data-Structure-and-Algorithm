// writing a program to sort the array using quick sort in recursion!!
#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot = arr[start];
    int count = 0;
    for(int i = start + 1; i <= end; i++){
        if(pivot >= arr[i]){
            count++;
        }
    }
    
    int pivotIndex = start + count;
    swap(arr[start],arr[pivotIndex]);

    int i = start;
    int j = end;

    while(i < pivotIndex  && j > pivotIndex){
        
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex  && j > pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int start, int end){

    // Base Case
    if(start >= end){
        return;
    }

    int p = partition(arr,start,end);

    // Left Sort
    quickSort(arr,start,p-1);

    // Right Sort
    quickSort(arr,p+1,end);
}

int main(){
    
    int arr[6] = {6,1,8,4,9,0};
    int n = 6;

    quickSort(arr,0,n-1);
    
    // printing the array
    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
    return 0;
}