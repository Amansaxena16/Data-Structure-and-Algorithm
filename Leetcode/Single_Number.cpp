#include<iostream>
#include<vector>
using namespace std;

void singleNumber(vector<int>& nums) {
    int len = nums.size();
    int max  = nums[0];
    for(int i = 0; i < len ; i++){
        if(max <= nums[i]){
            max =  nums[i];
        }
    }
    max = max + 1;
    int arr[max];
    for(int i = 0; i < max; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < len; i++){
        int index = nums[i];
        arr[index]++;
    }

    for(int i = 0; i < max; i++){
        if(arr[i] == 1){
            cout << arr[i];
        }
    }
}

int main(){
    
    vector<int> nums = {4,1,2,1,2};
    singleNumber(nums);
    return 0;
}