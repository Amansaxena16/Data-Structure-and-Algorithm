// writing a program to find the array is sorted or not!!
#include<iostream>
using namespace std;

bool checkSorted(int arr[], int n){

    int count = 0;
    if(arr[0] < arr[n-1]){
        count++;
    }
    for(int i = 0; i < n -1; i++){
        if(arr[i] > arr[i+1]){
            count++;
        }
        if(count >= 2){
            return false;
        }
    }
    return true;
}

int main(){
    
    int arr[4] = {2,1,3,4};
    
    if(checkSorted(arr,4)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    return 0;
}