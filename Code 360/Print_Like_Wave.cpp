// writing a program to print the 2d arrays values in wave form!!

#include<iostream>
using namespace std;

void wavePrint(int arr[][3], int row, int col){
    cout << "Like a wave : ";
    int i = 0;
    for(i = 0; i < col; i++){
        int j = 0;
        for(j = 0; j < row; j++){
            cout << arr[j][i] << " ";
        }
        i++;
        if(i >= col){
            break;
        }
        for(j = j - 1; j >= 0; j--){
            cout << arr[j][i] << " ";
        }
    }
}

int main(){
    
    int arr[3][3] = {{11,22,33}, {100,200,300},{8,16,24}};
    wavePrint(arr,3,3);
    return 0;
}