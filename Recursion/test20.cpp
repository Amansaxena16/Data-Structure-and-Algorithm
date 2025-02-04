// writing a program to find an element using binary search using recursion!!
#include<iostream>
#include<vector>
using namespace std;

int findElement(vector<int> arr, int s, int e, int target){
    if(s > e){
        return -1;
    }

    int mid = (s + e) / 2;  // finding mid value
    if(arr[mid] == target){
        return mid;  // comparing the value 
    }
    if(arr[mid] < target){
        s = mid + 1;
    }
    else{
        e = mid - 1;
    }

    return findElement(arr,s,e,target);
}

int main(){
    
    vector<int> arr = {-1,0,3,5,9,12};
    int s = 0;
    int e = arr.size() - 1;
    int target = 9;
    cout << findElement(arr,s,e,target) << endl; 
    return 0;
}