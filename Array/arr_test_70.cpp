// writing a program to find the all duplicates in an array!!
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

void findDuplicates(int arr[], int n){
    unordered_map<int,int> countMap;
    vector<int> nums;

    for(int i = 0; i < n; i++){
        countMap[arr[i]]++;

        if(countMap[arr[i]] >= 2){
            nums.push_back(arr[i]);
        }
    }       

    // printing the elements in vector
    for(auto i : nums){
        cout << i << "\t";
    }
    cout << endl;
}

int main(){
    
    int arr[8] = {4,3,2,7,8,2,3,1};
    findDuplicates(arr,8);

    return 0;
}