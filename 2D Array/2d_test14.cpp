//writing a program to ratote the 2d array to 90 degree!!
#include<iostream>
using namespace std;

void rotateArray(int arr[][4], int row, int col){
    int inverse[4][4];

    // Transposing the matrix and inserting into the inverse array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            inverse[j][i] = arr[i][j];
        }
    }

    // swapping the elements
    for(int i = 0; i < row; i++){
        swap(inverse[i][0], inverse[i][row-1]);
    }

    // transfering the value into main array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            arr[i][j] = inverse[i][j];
        }
    }
    // printing the inverse array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    int arr[4][4] = {{101,102,103,104},{201,202,203,204},{301,302,303,304},{401,402,403,404}};
    rotateArray(arr,4,4);

    return 0;
}