// writing a program to find the total sum of elements in a sub array!!
#include<iostream>
using namespace std;

int maxSumArray(int arr[], int n){
    int max = arr[0];
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
        if(sum > max){
            max = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }

    return max;
}

int main(){
    
    int arr[6] = {10, 20, -30, 40, -50, 60};
    cout << "Max Sum of Sub Array is : " << maxSumArray(arr,6);
    return 0;
}