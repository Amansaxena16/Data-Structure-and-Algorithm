// writing a program to find the largest row in 2d array!!
#include<iostream>
#include <climits> 
using namespace std;

void findLargestRow(int arr[][3], int row, int col){
    int min = INT_MIN;
    int rowIndex = 0;

    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum = sum + arr[j][i];
        }
        
        if(sum > min){
            min = sum;
            rowIndex = i;
        }
    }

    cout << "Largest row is : " << rowIndex;
}

int main(){
    
    int arr[3][3] = {{11,22,33}, {100,200,300},{8,16,24}};
    findLargestRow(arr,3,3);
    return 0;
}