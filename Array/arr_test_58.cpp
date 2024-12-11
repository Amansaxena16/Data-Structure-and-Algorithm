// writing a program to find the target from an array!!
#include<iostream>
#include<unordered_map>
using namespace std;

void twoSum(int arr[], int n){
    int target = 6;
    int count = 0;

    unordered_map<int,int> findSum;

    for(int i = 0; i < n; i++){
        findSum.insert({i,arr[i]});
    }
    for(int i = 0; i < n; i++){
        int value = target - arr[i];
        if(findSum.find(value) == findSum.end()){
            cout << arr[i] << " " << value << endl;
            break;
        }
    }
}

int main(){
    
    int arr[3] ={2,3,4};
    twoSum(arr,3); 
    return 0;
}