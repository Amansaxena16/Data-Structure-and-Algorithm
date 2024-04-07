#include<iostream>
using namespace std;

int main(){
    int size = 0;
    int arr[10] = {1,2,3,4,5,5,6,9,8,9};

    for(int i = 0; i < 10; i++){
        int count = 0;
        for(int j = i; j < 10; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count >= 2){
            cout << arr[i] << endl;
            size++;
        }
    }

}