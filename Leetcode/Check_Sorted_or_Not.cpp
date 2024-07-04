#include<iostream>
using namespace std;

int findMin(int nums[], int n){
    int index = 0;
    for(int i = 0; i < n ; i++){
        if(nums[i] < nums[i-1] && nums[i] < nums[i+1]){
                index = i;
                break;
            }
    }
    return index;
}

int main(){
    int n = 5;
    int nums[n] = {3,4,5,1,2};
    cout << findMin(nums,n);
}