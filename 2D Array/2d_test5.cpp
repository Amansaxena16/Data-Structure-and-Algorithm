// learning 2d array!!
#include<iostream>
using namespace std;

void searchElement(int arr[][3], int target, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == target){
                cout << "Element is presenet is the array!!";
            }
        }
    }   
    cout << endl;
}

int main(){
    
    int arr[3][3] = {{1,11,111},{2,22,222},{3,33,333}};

    // input 
    // cout << "Enter the values : " << endl; 
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    searchElement(arr,33,3,3);
    
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    return 0;

}