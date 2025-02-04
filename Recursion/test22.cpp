// writing a program to find the all subsets from an array without any duplicate using recursion!!
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void getSubsets(vector<int> nums, vector<int> ans, int i){
    if(i == nums.size()){
        for(int val: ans){
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // include
    ans.push_back(nums[i]);
    getSubsets(nums,ans,i+1);

    // backtracking
    ans.pop_back(); 

    int idx = i+1;
    while(idx < nums.size() && nums[idx] == nums[idx-1]){
        idx++;
    }

    // exclude
    getSubsets(nums,ans,i+1);
}

int main(){
    
    vector<int> nums = {1,2,2,3};
    vector<int> ans;
    sort(nums.begin(), nums.end());
    getSubsets(nums,ans,0);
    return 0;
}