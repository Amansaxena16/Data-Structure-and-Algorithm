// writing a program to find the number of good pair in an array ---> Good Pair = (nums[i] == nums[j])
// LeetCode - 1512

#include<iostream>
using namespace std;

int numIdenticalPair(int nums[], int len){
    int pair = 0;
    for(int i = 0; i < len; i++){
        for(int j = i + 1; j < len; j++){
            if(nums[i] == nums[j]){
                pair++;
            }
        }
    }

    cout << pair;
}

int main(){
    
    int nums[6] = {1,2,3,1,1,3};
    numIdenticalPair(nums,6);
    return 0;
}