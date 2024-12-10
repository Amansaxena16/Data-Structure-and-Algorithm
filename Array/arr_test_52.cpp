// writing a program to sort the arrat without using sorting algo!!
#include<iostream>
using namespace std;

void sortNumbers(int arr[], int n){
    int start = 0;
    int mid = 0;
    int end = n - 1;

    while(mid <= end){
        if(arr[mid] == 0){
            swap(arr[start++],arr[mid++]);
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid++], arr[end--]);
        }
    }
    // printing the array
    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main(){
    
    int arr[6] = {2,0,1,1,0,2};
    sortNumbers(arr,6);
    return 0;
}