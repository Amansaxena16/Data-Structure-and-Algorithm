// writing a program to find the element in the array using binary search in recursion!!
#include<iostream>
using namespace std;

bool findElement(int arr[], int start, int end, int target){
    int mid = (start + end) / 2;

    if(start > end){
        return false;
    }

    if(arr[mid] == target){
        return true;
    }
    else if(arr[mid] < target){
        findElement(arr,mid+1,end,target);
    }
    else{
        findElement(arr,start,mid-1,target);
    }
}

int main(){
    
    int arr[5] = {2,4,6,8,10};
    int start = 0;
    int end = 4;
    int target;
    cout << "Enter an element to find in array : ";
    cin >> target;
    
    if(findElement(arr,start,end,target)){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }
    return 0;
}