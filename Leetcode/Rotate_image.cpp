#include<iostream>
using namespace std;

void rotate(int arr[][3], int row, int col){
    int n = row;
    int rotated_arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
           rotated_arr[j][n-1-i] = arr[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << rotated_arr[i][j] << "\t";
        }
        cout << "\n";
    }
}

int main(){
    
    int arr[3][3] = {{1,2,3}, {4,5,6},{7,8,9}};
    rotate(arr,3,3);
    return 0;
}