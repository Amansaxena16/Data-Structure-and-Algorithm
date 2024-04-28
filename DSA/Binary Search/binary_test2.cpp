// Writting a program to find the lest and right most Occurrence of a number in an array using Binary Search!!
#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the Size of an Array : ";
    cin >> size;

    int arr[size];
    cout << "Enter the values into the Array : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter a value you want to find the left and right most Occurrence and it index : ";
    cin >> key;

    int first_index = arr[0];
    int last_index = size-1;
    int first_occ = 0;
    int last_occ = 0;

    while(first_index <= last_index){
        int mid_point = (first_index + last_index) / 2;
        if(key == arr[mid_point]){
            first_occ = mid_point;
            last_index = mid_point - 1;
        }
        else if(key > arr[mid_point]){
            first_index = mid_point + 1;
        }
        else if(key < arr[mid_point]){
            last_index = mid_point - 1;
        }
    }

    first_index = arr[0];
    last_index = size - 1;
    while(first_index <= last_index){
        int mid_point = (first_index + last_index) / 2;
        if(key == arr[mid_point]){
            last_occ = mid_point;
            first_index = mid_point + 1;
        }
        else if(key > arr[mid_point]){
            first_index = mid_point + 1;
        }
        else if(key < arr[mid_point]){
            last_index = mid_point - 1;
        }
    }

    cout << "First Occurrence of " << key << " at " << first_occ  << " & " << last_occ << " Index";
}