// writing a program to find the inversion that may exist in an array!!
#include<iostream>
using namespace std;

int count = 0;

void merge(int arr[], int start, int end){
    int mid = (start + end) / 2;

    int len1 = (mid - start) + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int index = start;

    // copying left part into first array
    for(int i = 0; i < len1; i++){
        first[i] = arr[index++];
    }

    index = mid + 1;
    // copying right part into second array
    for(int i = 0; i < len2; i++){
        second[i] = arr[index++];
    }

    int left = 0; 

    // Checking if first array value is greater then count while increase by len2 value
    while(left < len1){

        if(first[left] > second[0]){
            count = count + len2;
            cout <<"count : " <<  count << endl;

        }
        left++;
    }

    // free the dynamic memory allocation 
    delete[] first;
    delete[] second;    
}

void mergeSort(int arr[], int start, int end){
    int mid = (start + end) / 2;

    if(start >= end){
        return;
    }

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
    cout << "Number of Inversion in an array is : " <<  getInversion(arr, n) << endl;

    return 0;
}