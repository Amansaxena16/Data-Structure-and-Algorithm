// writing a program to find the second largest number in an array!!
#include<iostream>
using namespace std;

int findSecondLargest(int arr[], int n){
    int largest = arr[0];
    int secondLargest = -1;

    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    
    int arr[6] = {-10 ,-40, -25, -12 ,-25, -10};
    cout << "Second Largest Number is  : " << findSecondLargest(arr,6);
    return 0;
}