// Writing a program to Find the First and Last Position of an Element In Sorted Array using Binary Search!!
#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the Size : ";
    cin >> size;

    int arr[size];
    cout << "Enter the values into the array : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element you want to find : ";
    cin >> key;

    int mid;
    int start = 0;
    int end = (size-1);

    mid = start + ((end - start) / 2);

    // Here I am taking out First Element Index of the key
    while(start <= end){
        if(arr[mid] == key){
            if(arr[mid-1] == key){
                end = mid - 1;
            }
            else{
                cout << "First Index value of " << key << "is " << mid << endl;
                break;
            }
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);

    }

    // Here I am taking out Last Element Index of the key
    start = 0;
    end = (size-1);
    mid = start + ((end - start) / 2);

    while(start <= end){
        if(arr[mid] == key){
            if(arr[mid + 1] == key){
                start = mid + 1;
            }
            else{
                cout << "Last Index Value of " << key << "is " << mid;
                break;
            }
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
}