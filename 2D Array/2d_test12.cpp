// writing a program to print the 2d array in wave form!!
#include<iostream>
using namespace std;

void printWave(int arr[][3], int row, int col){
    for(int i = 0; i < col; i++){
        if(i % 2 == 0){
            // print from up to down
            for(int j = 0; j < col; j++){
                cout << arr[j][i] << "\t";
            }
        }
        else{
            // print from down to up
            for(int j = 0; j < col; j++){
                cout << arr[j][i] << "\t";
            }
        }
    }
}

int main(){
    
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printWave(arr,3,3);
    return 0;
}