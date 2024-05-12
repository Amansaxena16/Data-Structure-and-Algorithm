// writing a program to sort an array using selection sort!!

#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter a size for your array : ";
    cin >> size;

    int arr[size];
    cout << "Enter the Values : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < (size-1); i++){
        int min = arr[i];
        for(int j = i+1; j < size; j++){
            if(min > arr[j]){
                int temp = min;
                min = arr[j];
                arr[j] = temp; 
            }
        }
        arr[i] = min;
    }

    cout << "Sorted Array : ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << "\t";
    }

}