// Writting a code to find the key in an array using Binary Search

#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the Size of the Array : " ; 
    cin >> size;

    int arr[size];
    cout  << "Enter the Value into the Array ... Value must be in INCREASING OR DESCRESING ORDER : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the Value you want to Find : ";
    cin >> key;

    int first_index = 0;
    int last_index = size-1;         

    while(first_index <= last_index){
        int mid_point = (first_index + last_index)/2;   

        if(arr[mid_point] == key){
            cout << "Value at this Index : " << mid_point << endl;
            break;
        }
        else if(arr[mid_point] < key){
            first_index = mid_point + 1;
        }
        else if(arr[mid_point] > key){
            last_index = mid_point - 1;
        }
    }
}