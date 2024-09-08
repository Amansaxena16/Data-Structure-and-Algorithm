// writing a program to find the missing number in an array!!
#include<iostream>
using namespace std;

int missingNumber(int arr[], int n){
    int actualSum = 0;
    actualSum = n * (n + 1) / 2;       

    int sum = 0;
    for(int i = 0; i < n - 1; i++){
        sum = sum + arr[i];
    }

    actualSum = actualSum - sum;
    return actualSum;
}

int main(){

    int arr[11] = {4 ,6 ,7, 9,2 ,1 ,8, 11, 10, 3};
    cout << "Missing Number  : " << missingNumber(arr,11);
    return 0;
}