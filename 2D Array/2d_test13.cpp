// printing the 2d array in spiral form!!
#include<iostream>
using namespace std;

void printSpiral(int arr[][4], int row, int col){
    int startingRow = 0;
    int endingRow = col - 1;
    int startingCol = 0;
    int endingCol = row - 1;
    int total = row * col;
    int count = 0;

    while(count < total){

        // printing the starting row
        for(int i = startingCol; count < total && i <= endingCol; i++){
            cout << arr[startingRow][i] << "\t";
            count++;
        }
        startingRow++;

        // printing the ending col
        for(int i = startingRow; count < total && i <= endingRow; i++){
            cout << arr[i][endingCol] << "\t";
            count++;
        }
        endingCol--;

        // printing ending row
        for(int i = endingCol; count < total && i >= startingCol; i--){
            cout << arr[endingRow][i] << "\t";
            count++;
        }
        endingRow--;

        // printing starting row 
        for(int i = startingCol; count < total && i <= endingCol; i++){
            cout << arr[startingRow][i] << "\t";
            count++;
        }
        startingRow++;
    }
    cout << endl;
}

int main(){
    
    int arr[4][4] = {{1,2,3,33},{4,5,6,66},{7,8,9,99},{101,102,103,104}};
    printSpiral(arr,4,4);
    return 0;
}