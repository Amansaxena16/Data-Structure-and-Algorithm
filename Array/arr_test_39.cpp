// writing a program to find the inversion that may exist in an array!!
#include<iostream>
using namespace std;

int getInversion(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n -1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    
    int arr[5] = {2,5,1,3,4};
    cout << "Number of Inversion in an array is : " <<  getInversion(arr,5) << endl;

    return 0;
}