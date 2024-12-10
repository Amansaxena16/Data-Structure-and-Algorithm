// writing a program to sort two array without using extra space!!
#include<iostream>
using namespace std;

void sortArray(int arr1[], int m, int arr2[], int n){
    int i = (m - n) - 1;
    int j = n - 1;
    int k = m - 1;

    while(i >= 0 && j >= 0){
        if(arr1[i] < arr2[j]){
            arr1[k--] = arr2[j--];
        }
        else{
            arr1[k--] = arr1[i--];
        }
    }

    // printing the array
    for(int i = 0; i < m; i++){
        cout << arr1[i] << "\t";
    }
    cout << endl;
}

int main(){
    
    int arr1[6] = {1,2,3,0,0,0};
    int arr2[3] = {2,3,4};
    sortArray(arr1,6,arr2,3);

    return 0;
}