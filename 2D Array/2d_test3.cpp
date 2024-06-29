// writing a program to get the sum of each row in 2d array!!
#include<iostream>
using namespace std;

void getRowSum(int arr[][3], int row, int col){

    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum = sum + arr[i][j];
        }
        cout << "Row " << i + 1 << " Sum : " << sum << endl;
    }
}

void getColSum(int arr[][3], int row, int col){

    for(int i = 0; i < col; i++){
        int sum = 0;
        for(int j = 0; j < row; j++){
            sum = sum + arr[j][i];
        }
        cout << "Col " << i + 1 << " Sum : " << sum << endl;
    }
}

int main(){
    
    int arr[3][3] = {{11,22,33}, {100,200,300},{8,16,24}};
    getRowSum(arr,3,3);
    getColSum(arr,3,3);
    return 0;
}