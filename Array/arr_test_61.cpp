// writing a program to remove the duplicate number in sorted array!!
#include<iostream>
using namespace std;

int removeDuplicate(int arr[], int n){
    int count = 0;
    int largest = 0;

    for(int i = 0; i < n ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    int test[largest] = 0;

    for(int i = 0; i < largest; i++){
        
    }
}

int main(){

    int arr[6] = {1,1,1,2,2,3};
    cout << removeDuplicate(arr,6) << endl; 

    return 0;
}