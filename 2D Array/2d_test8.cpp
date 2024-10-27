// writing a program to 2d array in spiral form!!
#include<iostream>
using namespace std;

void printSpiral(int arr[][4], int row, int col){
    int count = 0;
    int total = row * col;

    // Indexs
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1; 
    int endingCol = col - 1;

    while(count < total){

        // printing starting row 
        for(int i = startingCol; count < total && i <= endingCol  ; i++){
            cout << arr[startingRow][i] << " ";
            count++;
        }
        startingRow++;

        // printing ending column
        for(int i =  startingRow; count < total &&  i <= endingRow; i++){
            cout << arr[i][endingCol] << " "; 
            count++;
        }
        endingCol--;

        // printing ending row
        for(int i = endingCol; count < total &&  i >= startingCol; i--){
            cout << arr[endingRow][i] << " ";
            count++;
        }
        endingRow--;

        // printing starting column
        for(int i = endingRow; count < total &&  i >= startingRow; i--){
            cout << arr[i][startingCol] << " "; 
            count++;
        }
        startingCol++;
    }
    cout << endl;
}

int main(){
    
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12 }};
    printSpiral(arr,3,4);
    return 0;
}