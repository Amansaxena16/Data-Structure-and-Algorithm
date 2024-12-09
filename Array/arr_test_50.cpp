// writing a program to find the next permutation from an array!!
#include<iostream>
#include<algorithm>
using namespace std;

void nextPermutation(int arr[], int n){
    int dipIndex = -1;

    // finding the dip index in the array
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] < arr[i + 1]){
            dipIndex = i;
            break;
        }
    }

    // finding the largest value
    int largestValue = -1;
    for(int i = dipIndex + 1; i < n; i++){
        if(arr[i] > largestValue){
            largestValue = arr[i];
        }
    }
    // finding out the exact larger value of the dipindex value
    int largerValue = -1;
    for(int i = dipIndex + 1; i < n; i++){
        if(arr[i] > arr[dipIndex] && arr[i] < largestValue){
            swap(arr[i], arr[dipIndex]);
            break;
        }
    }

    // sorting the element after the dipIndex
    sort()
}

int main(){
    
    int arr[7] = {2,3,5,4,1,0,0};
    nextPermutation(arr,7);
    return 0;
}