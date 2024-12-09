// writing a program to set the matrix zero!!
#include<iostream>
using namespace std;

void setZero(int arr[][3], int row, int col){
    // taking extra space
    int extraRow[3] = {0};
    int extraCol[3] = {0};

    // traversing the matrix and finding the zeroes and setting the index value of extra space to zero
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == 0){
                extraRow[i] = 1;
                extraCol[j] = 1;
            }
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(extraRow[i] == 1 || extraCol[j] == 1){
                arr[i][j] = 0;
            }
        }
    }

    // printing the array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    int arr[3][3] = {{1,1,1},{1,0,1},{1,1,1}};
    setZero(arr,3,3);

    return 0;
}