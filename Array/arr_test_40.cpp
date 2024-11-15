// merge sort 
#include<iostream>
using namespace std;

void merge(int arr[], int start, int end){
    int mid = (start + end) / 2;
    int len1 = (mid - start) + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copying the left half
    int k = start;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }

    // copying the right half
    k = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[k++]; 
    }

    // Merge 2 sorted arrays
    int left = 0;
    int right = 0;
    int index = start;

    while(left < len1 && right < len2){
        if(first[left] <= second[right]){
            arr[index++] = first[left++];
        }
        else{
            arr[index++] = second[right++];
        }
    }
    
    // copying the remaining elements from first array, if any
    while(left < len1){
        arr[index++] = first[left++];
    }

    // copying the remaining elements from second array, if any
    while(right < len2){
        arr[index++] = second[right++];
    }

    // free the dynamic memory allocation 
    delete[] first;
    delete[] second;
}

void mergeSort(int arr[], int start, int end){
    
    // base case
    if(start >= end){
        return;
    }

    // mid value
    int mid = (start + end) / 2;

    // sort left part of the array
    mergeSort(arr,start,mid);

    // sort right part of the array
    mergeSort(arr, mid + 1, end);

    merge(arr,start,end);    
}

int main(){
    
    int arr[10] = {66,44,30,100,1,3,43,23,99,4};
    int n = 10;
    mergeSort(arr, 0, n - 1);

    // printing the array
    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
    return 0;
}