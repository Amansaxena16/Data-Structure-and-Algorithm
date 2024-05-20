// writing a program to seach in a number in Rotated Array using Binary Search!!
#include<iostream>
using namespace std;

int find_pivot(int arr[], int n){
    int mid;
    int start = 0;
    int end = (n-1);

    while(start < end){
        mid = start + ((end - start) / 2);

        if(arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1]){
            return mid;
        }
        else if(arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
}

int search(int arr[], int n, int k){
    int mid;
    int start;
    int end;

    int pivot = find_pivot(arr,n);

    if(k >= arr[0]){
        start = 0;
        end = (pivot - 1);
    }
    else{
        start = pivot;
        end = (n-1); 
    }
    
    while(start <= end){
        mid = start + ((end - start) / 2);
        if(arr[mid] == k){
            cout << "Value is at " << mid << " Index" << endl;
            break;
        }
        else if(arr[mid] < k){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout << "Nothing Found";
}

int main(){
    int n = 7;
    int k = 4;
    int arr[n] = {5,8,9,10,1,3,4};
    
    search(arr,n,k);
}