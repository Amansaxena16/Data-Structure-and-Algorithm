// writing a program to find the missing number in an array!!
// Leetcode - 268

#include<iostream>
using namespace std;

int missingNumber(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        count = count + arr[i];
    }

    int miss= n * (n+1) / 2;
    return miss / n;
}

int main(){
    
    int arr[9] = {9,6,4,2,3,5,7,0,1};
    cout << "Missing Number of Array : " << missingNumber(arr,9);
    return 0;
}