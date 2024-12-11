// writing a program to find the element in 2d array!!
#include<iostream>
using namespace std;

int findElement(int arr[][3], int row, int col, int target){
    int start = 0;
    int end = (row * col) - 1;

    while(start <= end){
        int mid = (end + start) / 2;
        int r = mid / col;
        int c = mid % col;

        if(arr[r][c] == target){
            cout << "Element is present!" << endl;
            return 0;
        }
        else if(arr[r][c] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }   

    cout << "Element is not present" << endl;
    return 0;
}

int main(){
    
    int arr[3][3] = {{1,2,3,},{4,5,6},{7,8,9}};
    findElement(arr,3,3,8);
    return 0;
}