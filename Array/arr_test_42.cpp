// writing a program to find the sum of two number in an array!!
#include<iostream>
#include<vector>
#include <algorithm> // Required for std::sort
using namespace std;

void twoSum(vector<int> arr, int target){
    int left = 0;
    int right = arr.size() - 1;

    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
    while(left < right){
        if(arr[left] + arr[right] == target){
            cout << left << " " << right << endl;
            break;
        }
        else if(arr[left] + arr[right] < target){
            left++;
        }
        else{
            right--;
        }
    }
}   

int main(){
    
    vector<int> arr = {3,2,4};
    twoSum(arr,6);
    return 0;
} 