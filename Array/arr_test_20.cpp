// writing a program to sort an array of 0's, 1's and 2's!!
#include<iostream>
using namespace std;

void sortArray(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    // print the array 
    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
}

int main(){
    
    int arr[6] ={2,1,0,0,2,1};
    sortArray(arr,6);
    return 0;
}