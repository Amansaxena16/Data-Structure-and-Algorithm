// writing a program to find the sub array whose sum is 0
#include<iostream>
#include<unordered_map>
using namespace std;

int findSubArray(int arr[], int n){
    int max = 0;
    int sum = 0;

    unordered_map<int,int> mpp;

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];

        if(sum == 0){
            max = i + 1;
        }
        else{
            if(mpp.find(sum) != mpp.end()){
                max = i - mpp[sum];
            }
            else{
                mpp.insert({sum,i});
            }
        }
    } 

    cout << max << endl;
    return 0;
}

int main(){
    
    int arr[20] = {65 ,-4, 0, -43, 79, 46 ,-33, -23, 6, -4, 21, -29, -20, -5, 37 ,-47, 80 ,-79, -68, 42};
    findSubArray(arr,20);
    return 0;
}