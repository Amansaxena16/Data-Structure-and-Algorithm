// writting a program to find the pivot number in an array using binary search!!
#include<iostream>
using namespace std;

int main(){
    int arr[8] = {9,8,7,6,5,4,3,2};
    int start = 0;
    int end = 8;

    int mid;
    mid = start + ((end - start) / 2);  // mid = (start + end) / 2

    while(start <= end){
        if(arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1]){
            cout << "The Pivot Array is " << arr[mid] << " at this index " << mid;
            break;
        }
        else if(arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }
}

