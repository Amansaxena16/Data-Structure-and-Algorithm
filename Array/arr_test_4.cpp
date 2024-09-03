// writing a program to find the Leaders in an array!!

#include<iostream>
using namespace std;

void findLeader(int arr[], int n){

    int max = 0;
    int Leaders[n];
    int index = 0;

    for(int i = n - 1; i >= 0; i--){
        if(arr[i] >= max){
            max = arr[i];
            Leaders[index] = arr[i];
            index++;
        }
    }
    for(int i = index - 1; i >= 0; i--){
        cout << Leaders[i] << "\t";
    }
}

int main(){

    int arr[4] = {5, 10, 20, 40} ;
    findLeader(arr,4);

    
    return 0;
}