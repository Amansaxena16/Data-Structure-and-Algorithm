// writing a program to find the element in the 2D matrix
#include<iostream>
using namespace std;

bool searchMatrix(int arr[3][3], int row, int col, int target){
    int start = 0;
    int end = (row * col) - 1;
    int mid = start + (end - start) / 2; 

    while(start <= end){
        int element = arr[mid/col][mid%col];
        if(element == target){
            cout << "value is Present in array !!";
            return true;
        }
        else if(element < target){
            start = mid + 1;
        }
        else{
            end = mid -1 ;
        }
        mid =start + (end - start) / 2; 
    }

    cout << "Value is not present in array!!";
    return false;
}

int main(){
    
    int arr[3][3] = {{1,6,7},{10,11,15},{20,25,27}};
    int target;
    cout << "Enter a Number you want to find : ";
    cin >> target;

    searchMatrix(arr, 3, 3, target);
    return 0;
}