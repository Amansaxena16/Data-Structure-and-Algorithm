// Given an array of number and 'S' variable... We have to return the list of all pairs of element such that each sum of elements of each pair equals to "S".

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i] + arr[j] == 5){
                if(arr[i] > arr[j]){
                    cout << "Pair are : " << arr[j] << "\t" << arr[i] << endl;
                }
                else if(arr[i] < arr[j]){
                    cout << "Pair are : " << arr[i] << "\t" << arr[j] << endl;
                }
            }
        }
    }
}