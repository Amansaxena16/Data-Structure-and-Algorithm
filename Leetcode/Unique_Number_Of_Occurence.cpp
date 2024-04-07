#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,2,1,1,3};
    int arr_count[6];
    int count;
    int size = 0;

    for(int i = 0; i < 6; i++){
        count = 0;

        for(int j = 0; j < 6; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        arr_count[i] = count;
        size++;
    }
    for(int k = 0; k < size; k++){
        cout << arr_count[k] << "\t";
    }
}