// writing a prgram to sort the array using merge sort!!
#include<iostream>
using namespace std;

void mergeArray(int arr[], int left, int mid, int right){
    int size = right - left + 1;
    int temp[size];
    int low = left;
    int high = mid + 1;
    int i = 0;

    while(low <= mid && high <= right){
        if(arr[low] <= arr[high]){
            temp[i] = arr[low];
            low++;
        } else {
            temp[i] = arr[high];
            high++;
        }
        i++;
    }

    while(low <= mid){
        temp[i] = arr[low];
        low++;
        i++;
    }

    while(high <= right){
        temp[i] = arr[high];
        high++;
        i++;
    }

    for(int j = 0; j < size; j++){
        arr[left + j] = temp[j];
    }
}

void mergeSort(int arr[], int left, int right){
    if(left >= right){
        return;
    }
    
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    mergeArray(arr, left, mid, right);
}

int main(){
    int arr[7] = {55, 4, 3, 77, 6, 99, 1};
    int left  = 0;
    int right = 6;
    mergeSort(arr, left, right);

    for(int i = 0; i <= right; i++){
        cout << arr[i] << "\t";
    }
    return 0;
}
