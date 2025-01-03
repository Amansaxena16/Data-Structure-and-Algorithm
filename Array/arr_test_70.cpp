// writing a program to find the all duplicates in an array!!
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

void findDuplicates(int arr[], int n){
    vector<int> nums;

    for(int i = 0; i < n; i++){
        int index = abs(arr[i]) - 1;

        if(arr[index] > 0){
            arr[index] = -abs(arr[index]);
        }
        else{
            if(arr[i] < 0){
                arr[i] = abs(arr[i]);
            }
            nums.push_back(arr[i]);
        }
    }

    // printing the vector
    for(auto i : nums){
        cout << i << "\t"; 
    }
    cout << endl;
}

int main(){
    
    int arr[20] = {3,11,8,16,4,15,4,17,14,14,6,6,2,8,3,12,15,20,20,5};
    findDuplicates(arr,20);

    return 0;
}