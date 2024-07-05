#include<iostream>
using namespace std;

int findMinimum(int nums[], int n){
    int index;
    int min = nums[0];

    for(int i = 0; i < n; i++){
        if(min > nums[i]){
            min = nums[i];
            index = i;
        }
    }

    return index;
}

int CheckSorted(int nums[], int n, int index){
    int newArray[n];
    int j = 0;

    // Right Shift start from here
    for(int i = index; i < n; i++){
        newArray[j] = nums[i];
        j++;
    }

    for(int i = 0; i < index; i++){
        newArray[j] = nums[i];
        j++;
    }
    
    // checking if it is sorted or not
    for(int i = 0; i < n; i++){
        if(newArray[i] > newArray[i+1]){
            return false;
        }
        else{
            return true;
        }
    }
}

int main(){
    int n = 5;
    int nums[n] = {3,4,5,1,2};
    int index = findMinimum(nums,n);
    CheckSorted(nums,n,index);

}