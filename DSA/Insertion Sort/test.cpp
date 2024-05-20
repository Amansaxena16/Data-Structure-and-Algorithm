// writing a program to sort an array using insertion sort!!
#include<iostream>
using namespace std;

int main(){
    int arr[8] = {10,5,6,12,1,100,8,3};

    for(int i = 1; i < 8; i++){
        int temp = arr[i];
        int j;
        for(j = i-1; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }

    cout << "Sorted Array : ";
    for(int i = 0; i < 8; i++){
        cout << arr[i] << "\t";
    }
}