// writing a program to 2d array!!
#include<iostream>
using namespace std;

int main(){
    
    // int arr[3][3]; // First type to give input
    // int arr[3][3] = {{1,11,111}, {2,22,222},{3,33,333}};
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};


    // // Taking Input
    // cout << "Enter the numbers in 2d array : ";
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    // Output
    cout << "Output : " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}