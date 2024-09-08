// writing a program to move all the zeroes at the end of the array!!
#include<iostream>
using namespace std;

void moveZeroes(int arr[], int n){
    int i = 0;
    for(int a = 0; a < n; a++){
        if(arr[a] == 0){
            i = a;
            break;
        }
    }
    if(arr[0] == 0 || i != 0){
        for(int j = i + 1; j < n; j++){
            if(arr[j] != 0){
                swap(arr[i],arr[j]);
                i++;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
}

int main(){
    
    int arr[3] = {1,0,1};
    moveZeroes(arr,3);
    return 0;
}