// writing a program to print like a wave in 2d array!!

#include<iostream>
using namespace std;

void printLikeWave(int arr[][4], int row, int col){
    int j = 0;
    for(int i = 0; i < col; i++){
        if(i % 2 == 0){
            for(j = 0; j < row; j++){
                cout << arr[j][i] << " ";
            }
        }
        else{
            for(j = row - 1; j >= 0; j--){
                cout << arr[j][i] << " ";
            }
        }
    }
    cout << endl;
}

int main(){
    
    int arr[3][4] = {{1,2,3,33},{4,5,6,66},{7,8,9,10}};
    printLikeWave(arr,3,4);
    return 0;
}