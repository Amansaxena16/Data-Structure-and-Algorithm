// writing a program to merge two array without using extra space!!
#include<iostream>
#include<algorithm>
using namespace std;

void mergeArray(int arr1[], int m, int arr2[], int n){
    int i = m - 1;
    int j = 0;

    while(i >= 0 && j < n){
        if(arr1[i] > arr2[j]){
            swap(arr1[i--],arr2[j++]);
        }
        else{
            i--;
            j++;
        }
    }

    // sorting both the array
    sort(arr1,arr1 + m);
    sort(arr2,arr2 + n);
    
    // printing the array
    for(int i = 0; i < m; i++){
        cout << arr1[i] << "\t";
    }
    cout << endl;

    for(int i = 0; i < n; i++){
        cout << arr2[i] << "\t";
    }
    cout << endl;
}

int main(){
    
    int arr1[4] = {0,1,4,5};
    int arr2[5] = {2,3,5,7,9};
    mergeArray(arr1,4,arr2,5);
    return 0;
}