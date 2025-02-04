// writing a program to find an array is sorted or not!!
#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr, int n){
    if(n == 1){
        return true;
    }

    n = n - 1;
    if(arr[n] <= arr[n-1]){
        return false;
    }
    return isSorted(arr,n);
}

int main(){
    
    vector<int> arr = {1,2,3,4};
    cout << isSorted(arr,4) << endl;
    return 0;
}