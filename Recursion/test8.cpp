// writing a program to find the element in linear search using recursion!!
#include<iostream>
using namespace std;

bool findElement(int arr[], int size,int target){
    if(size == 0){
        return false;
    }
    else{
        int n = size - 1;
        if(target == arr[n]){
            return true;
        }
        else{
            findElement(arr,n,target);
        }
    }
}

int main(){
    
    int arr[8] = {5,6,3,33,77,22,67,66};
    int target;
    cout << "Enter an element to find in array : ";
    cin >> target;
    
    if(findElement(arr,8,target)){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }
    return 0;
}