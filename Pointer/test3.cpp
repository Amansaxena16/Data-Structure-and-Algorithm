// writing a program to create an array in heap memory using NEW keyword!!;
#include<iostream>
using namespace std;

int getSum(int arr[], int n){
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }

    return sum;
}

int main(){
    
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int *arr = new int[n];
    // taking values
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "Sum of the Array is : " << ans; 

    delete []arr;
    return 0;
}