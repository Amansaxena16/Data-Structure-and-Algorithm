// writing a program to find the number that appear onces and the other number twice!!
#include<iostream>
using namespace std;

int singleNumber(int arr[], int n){
    int result = 0;
    for(int i = 0; i < n; i++){
        result = result ^ arr[i];
    }
    return result;
}

int main(){
    
    int arr[5] = {4,1,2,1,2};
    cout << "Single Number is : " << singleNumber(arr,5);
    return 0;
} 