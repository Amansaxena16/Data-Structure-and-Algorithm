// writing a program to move all the Zeroes at the end
#include<iostream>
using namespace std;

int main(){
    int arr[6] = {2,0,3,0,0,1};

    int nonzero = 0;
    for(int j = 0; j < 6; j++){
        if(arr[j] != 0){
            swap(arr[nonzero], arr[j]);
            nonzero++;
        }
    }

    // printing the array
    for(int i = 0; i < 6; i++){
        cout << arr[i] << '\t';
    }
    return 0;
}