// writing a program to print the array in 90 degree!!
#include<iostream>
using namespace std;

// here i am assigning the value to an 'ans 2d array' and [TC = O(n2)]
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

void printLike90DegreeUsingTranspose(int arr[][4], int row, int col){

    // Transpose the matrix
    for(int i = 0; i < row; i++){
        for(int j = i + 1; j < col; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Now reverse every row 
    for(int i = 0; i < row; i++){
    int p = 0;
    int q = row - 1;
        while(p < q){
            swap(arr[i][p], arr[i][q]);
            p++;
            q--;
        }
    }
    
    // printing the array!!
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    // Time Complexity =  
}


int main(){
    
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printLike90DegreeUsingTranspose(arr,4,4);
    // printLike90Degree(arr,3,3);
    return 0;
}