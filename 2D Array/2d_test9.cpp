// writing a program to print the array in 90 degree!!
#include<iostream>
using namespace std;

void printLike90Degree(int arr[][3], int row, int col){
    
    int ans[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            ans[j][row - 1 - i] = arr[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printLike90Degree(arr,3,3);
    return 0;
}