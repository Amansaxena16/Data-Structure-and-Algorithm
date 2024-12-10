// writing a program to find the maximum sum from a subarray using kadanes algo
#include<iostream>
using namespace std;

void findMaximumSum(int arr[], int n){
    int sum = 0;
    int maxSum = arr[0];

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
        if(maxSum < sum){
            maxSum = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }

    cout << "Max Sum is : " << maxSum << endl;
}

int main(){
    int arr[9] = {-2,-1,-3,4,-1,2,1,-5,4};
    findMaximumSum(arr,9);

    return 0;
}