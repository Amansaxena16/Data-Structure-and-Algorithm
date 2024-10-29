// writing a program to find the largest sum from a sub array!!
#include<iostream>
using namespace std;

int maxSubArray(int arr[], int n){
    int sum = 0;
    int maxi = arr[0];

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
        if(maxi < sum){
            maxi = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    
    int arr[8] = {-2,-3,4,-1,-2,1,5,-3};
    cout << "Maximum Sum is : " << maxSubArray(arr,8) << endl; 
    return 0;
}