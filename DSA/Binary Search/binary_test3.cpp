// writing a program to sort the array using binary search and with a key!!
#include<iostream>
using namespace std;

int main(){
    int size;
    int mid;

    cout << "Enter your size : ";
    cin >> size;

    int arr[size];
    cout << "Enter the value into the array : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Which value you want to find in the array : ";
    cin >> key;

    int starting_index = 0;
    int ending_index = (size -1);

    mid = starting_index + ((ending_index - starting_index) / 2);

    while(starting_index <= ending_index){
        if(arr[mid] == key){
            cout << "Key Value in on this Index : " << mid;
            return true;
        }
        else if(arr[mid] < key){
            starting_index = mid + 1;
        }
        else{
            ending_index = mid - 1;
        }
        mid = starting_index + ((ending_index - starting_index) / 2);
    }

}