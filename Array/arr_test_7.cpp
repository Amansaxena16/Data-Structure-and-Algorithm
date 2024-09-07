// writing a program to find the array is sorted or not!!
#include<iostream>
using namespace std;

bool checkSorted(int arr[], int n){

    int max = 0;
    int index = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]> max){
            max = arr[i];
            index = i;
        }
    }

    for(int i = index; i > 0; i--){
        if(arr[i] <= arr[i - 1]){
            return false;
        }
    }
    
    for(int i = index + 1; i < n - 1; i++){
        if(arr[i] >= arr[i + 1]){
            return false;
        }
    }

    return true;
}

int main(){
    
    int arr[4] = {6,7,7,5};
    
    if(checkSorted(arr,4)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    return 0;
}