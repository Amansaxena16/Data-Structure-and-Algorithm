// Given an array which have 0's , 1's and 2's and we have to sort them!!
#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,2,0,1,0};

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted Array : ";
    for(int i = 0; i < 6; i++){
        cout << arr[i] << "\t"; 
    }
}