// writing a program to sort an array using bubble sort!!

#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;

    int arr[size];
    cout << "Enter the values into the array : ";

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] > arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        }
    }

    cout << "Sorted Array : ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << "\t";
    }
}