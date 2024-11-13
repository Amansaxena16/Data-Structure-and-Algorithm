// writing a program to find the missing and repeating number in a array!!
#include<iostream>
using namespace std;

void findNumber(int arr[], int n){
    int test[n] = {0};
    
    for(int i = 0; i < n; i++){
        test[arr[i]]++;
         
    }
}

int main(){
    
    int arr[6] = {1,3,2,5,4,1};
    findNumber(arr,6);
    return 0;
}