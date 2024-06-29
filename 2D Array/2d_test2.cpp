// writing a program to search a number in a 2d array!!
#include<iostream>
using namespace std;

bool searchElement(int arr[][3], int target, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    
    int arr[3][3];

    cout << "Enter the elements : ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter a element to search : ";
    cin >> target;

    if(searchElement(arr, target, 3,3)){
        cout << "Is Present!!";
    }
    else{
        cout << "Not Present!!";
    }   
    return 0;
}