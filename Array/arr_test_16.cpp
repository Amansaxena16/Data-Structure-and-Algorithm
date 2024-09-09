// writing a program to find the maximum consecutive ones in an array!!
#include<iostream>
using namespace std;

int findMaxConsecutiveOnes(int arr[], int n){
    int count = 0;
    int max = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            count++;
            if(count > max){
                max = count;
            }
        }
        else{
            count = 0; 
        }
    }
    return max;
}

int main(){
    
    int arr[10] = {1,1,0,1,1,1,1,0,1,1};
    cout << "Maximum Count of 1's = " << findMaxConsecutiveOnes(arr,10);
    return 0;
}