// writing a program to remove the duplicate values from the sorted array!!
// leetcode - 26
#include<iostream>
using namespace std;

int removeDuplicates(int nums[], int len){
    int k = 0;

    for(int i = 0; i < len - 1; i++){
        if(nums[i] != nums[i+1]){
            k++;
        }
        
    }
}

int main(){
    
    int nums[13] = {0,0,1,1,1,1,2,2,3,3,3,4,4};
    removeDuplicates(nums,13);
    return 0;
}