#include<iostream>
using namespace std;

void findElements(int arr[], int n){
    int largest = -1;
    for(int i = 0; i < n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    
    int x = 0;
    for(int i = 1; i < largest; i++){
        if(arr[x] == i){
            x++;
        }
        else{
            cout << i << endl;
        }
    }
}

int main(){
    
    int arr[7] = {1,2,4,6,7,8,9};
    findElements(arr,7);
    return 0;
}