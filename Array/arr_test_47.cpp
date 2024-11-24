// writing a program to find the subarray sum equal to K
#include<iostream>
using namespace std;

int subarraySum(int arr[], int n, int k){
    int count = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum = sum + arr[j];

            if(sum == k){
                count++;
            }
        }
    }
    return count;
}

int main(){
    
    int arr[5] = {1,2,1,2,1};
    int k = 3;
    cout << subarraySum(arr,5,k) << endl;
    return 0;
}