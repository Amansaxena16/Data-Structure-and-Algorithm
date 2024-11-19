// writing a program to find the inversion that may exist in an array!!
#include<iostream>
using namespace std;

int count = 0;

void merge(int arr[], int start, int end){
    int mid = (start + end) / 2;
    int len = end - start + 1;
    int *merge = new int[len];

    int left = start;
    int right = mid + 1;
    int i = 0;

    while(left <= mid && right <= end){
        // here left is smaller
        if(arr[left] <= arr[right]){
            merge[i++] = arr[left++];
        }
        // here right is smaller
        else{
            merge[i++] = arr[right++];
            count = count + (mid - left + 1);
        }
    }

    while(left <= mid){
        merge[i++] = arr[left++];
    }

    while(right <= end){
        merge[i++] = arr[right++];
    }
    
    for(int i = 0, j = start; i < len; i++, j++){
        arr[j] = merge[i];
    }

    delete[] merge;
}

void mergeSort(int arr[], int start, int end){

    if(start >= end){
        return;
    }

    int mid = (start + end) / 2;

    // Sorting left half
    mergeSort(arr,start, mid);

    // Sorting right half
    mergeSort(arr,mid + 1, end);

    // merging the array
    merge(arr,start,end);

}

int getInversion(int arr[], int n){

    mergeSort(arr,0,n-1);
    return count;
}   

int main(){
    
    int arr[5] = {2,5,1,3,4};
    int n = 5;
    getInversion(arr,n);

    return 0;
}