// writing a program in which a matrix have a zero then set the entire row and column zero!!
#include<iostream>
using namespace std;

void setZeroes(int arr[][4], int n, int m){
    int row[n] = {0};
    int col[m] = {0};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){ 
            if(row[i] == 1 || col[j] == 1){
                arr[i][j] = 0;
            }
        }
    }

    // printing the array
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    
    int arr[4][4] = {{1,1,1,1},{1,0,1,1},{1,1,0,1},{1,0,0,1}};
    setZeroes(arr,4,4);
    return 0;
}