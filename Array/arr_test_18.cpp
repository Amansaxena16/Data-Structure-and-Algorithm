// writing a program to find the longest subarray with Sum of K size[Positives]!!
#include<iostream>
using namespace std;

int longestSubArrayWithSum(int arr[], int n, int k){
    int sum = 0;
    int length = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            sum = sum + arr[j];
            if(sum > k){
                sum = 0;
                break;
            }
            if(sum == k){
                length = (j - i) + 1;
                cout << "i : " << i << endl;
                cout << "j : " << j << endl;
                return length; 
            }
        }
    }
    return 0;
}

int main(){
    
    int arr[17] = {-13, 0, 6, 15, 16 ,2, 15 ,-12, 17, -16, 0 ,-3 ,19 ,-3 ,2, -9 ,-6};
    cout << "The Longest SubArray is : "  << longestSubArrayWithSum(arr,17,15);
    return 0;
}