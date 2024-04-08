#include<iostream>
using namespace std;

int main(){
    int done[6];
    int arr[6] = {1,2,2,1,1,3};
    for(int i = 0; i < 6; i++){
        int count = 0
        for(int j = i; j < 6; j++){
            for(int k = j; k < 6; k++){
                if(done[k] == arr[j]){
                    break;
                if(arr[i] == arr[j]){
                    count++
                }
            }
            }
        }
    }
}