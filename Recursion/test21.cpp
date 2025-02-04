// writing a program to print all the subsets!!
#include<iostream>
#include<vector>
using namespace std;

void printSubset(vector<int> &arr, vector<int> &ans, int i){
    if(i == arr.size()){
        for(int val: ans){
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // exclude
    ans.push_back(arr[i]);
    printSubset(arr,ans,i+1);

    ans.pop_back(); // Backtracking
    printSubset(arr,ans,i+1);  // Exclusion
}

int main(){
    
    vector<int> arr = {1,2,3};
    vector<int> ans;
    int i = 0;
    printSubset(arr,ans,i);
    return 0;
}