// writing a program to find the sum of array using recursion!!

#include<iostream>
using namespace std;

int findSum(int arr[], int size){
    if(size == 0){
        return 0;
    }
    else{
        int n = size - 1;
        return arr[n] + findSum(arr,n);
    }
}

int main(){
    
    int arr[5]= {5,77,3,2,1};
    cout << "Sum of the Array : " << findSum(arr,5) << endl;
    return 0;
}