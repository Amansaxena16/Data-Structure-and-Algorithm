// writing a program to find the sub array whose sum is 0
#include<iostream>
using namespace std;

int findSubArray(int arr[], int n){
    int count = 0;
    int element = 0;

    for(int i = 0; i < n -1; i++){
        for(int j = i; j < n; j++){
            count = count + arr[j];
            element++;

            // cout << count << "\t";

            if(count == 0){
                cout << endl << "Number of Elements are : " << element << endl;
                return 0; 
            }
        }
        count = 0;
        element = 0;
    }

    return 0;
}

int main(){
    
    int arr[8] = {15,-2,2,-8,1,7,10,23};
    findSubArray(arr,8);
    return 0;
}