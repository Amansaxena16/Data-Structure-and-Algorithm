// writing a program to find the median of two sorted arrays!!
// Leetcode - 4
#include<iostream>
using namespace std;

double findMedianSortedArrays(int arr1[], int size1, int arr2[], int size2){
    int tempSize = size1 + size2;
    int temp[tempSize];

    int i = 0;
    int j = 0;
    int tempIndex = 0;
    double median = 0;
    // sorting the array and pushing into temp array
    for(int k = 0; k < tempSize; k++){
        if(arr1[i] <= arr2[j]){
            temp[tempIndex] = arr1[i];
            i++;
            tempIndex++;
        }
        else{
            temp[tempIndex] = arr2[j];
            j++;
            tempIndex++;
        }
    }

    int check = tempIndex % 2;

    if(check == 0){
        int index = tempIndex / 2;
        median = (double)(temp[index - 1] + temp[index]) / 2;
    }
    else{
        int index = tempIndex / 2;
        median = temp[index];
    }

    return median;
}

int main(){
    
    int arr1[3] = {1,3,5};
    int arr2[2] = {2,4};
    
    cout << "Median of Two Arrays are : " << findMedianSortedArrays(arr1,3,arr2,2);
    return 0;
}