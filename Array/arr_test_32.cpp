// writing a program to sort the colours red, white and blue but in number as 0,1 and 2 without using sorting algo and library!!
#include<iostream>
using namespace std;

void sortColors(int arr[], int n){
    int start = 0;
    int middle = 0;
    int end = n - 1;

    while(middle <= end){
        if(arr[middle] == 0){
            swap(arr[start],arr[middle]);
            start++;
            middle++;
        }
        else if(arr[middle] == 2){
            swap(arr[middle],arr[end]);
            end--;
        } 
        else if(arr[middle] == 1){
            middle++;
        }
    }
    
    // printing the array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    
    int arr[6] = {2,1,0,1,0,2};
    sortColors(arr,6);
    return 0;
}