// writing a program to find the element in the 2D matrix
#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(int arr[3][4], int row, int col, int target){
    int rowIndex = 0;
    int colIndex = col - 1;

    while(rowIndex < row && colIndex >= 0){
        int element = arr[rowIndex][colIndex];

        if(element == target){
            cout << "Values is present in the array!!";
            return true;
        }
        if(element < target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    
    cout << "Value is not present in array!!";
    return false;
}

int main() {
    int arr[3][4] = {{1, 4, 6, 9}, {11, 13, 17, 19}, {6, 33, 77, 99}};

    int target;
    cout << "Enter a Number you want to find : ";
    cin >> target;

    searchMatrix(arr, 3, 4, target);
    return 0;
}