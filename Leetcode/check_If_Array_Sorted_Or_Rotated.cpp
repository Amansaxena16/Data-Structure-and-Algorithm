// writing a program to check whether a Array is Sorted or Rotated!!
#include<iostream>
using namespace std;

bool sortedRotated(int arr[], int n){
    int count = 0;
    for(int i = 1; i < n; i++){
        if(arr[i-1] < arr[i]){
            count++;
        }
    }

    if(arr[n-1] < arr[0]){
        count++;
    }
    return count <= 1;
}

int main(){

    int ans;
    int n;
    cout << "Enter the size of an array ";
    cin >> n;

    cout << "Enter the Value in the array : ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ans = sortedRotated(arr,n);

    if(ans == true){
        cout << "It is sorted and rotated array";
    }
    else{
        "Invalid Array";
    }
    return 0;
}