// writing a program to find the missing and repeating number in a array!!
#include<iostream>
using namespace std;

void findNumber(int arr[], int n){
    int test[n + 1] = {0};  // create an extra space 

    // Increasing the count of test array of arr[i] value
    for(int i = 0; i < n; i++){
        test[arr[i]]++;
    }
    
    // Finding the Repeating and missing number
    for(int i = 1; i <= n; i++){
        if(test[i] == 2){
            cout << "Repeating Number is : " << arr[i] << endl;
        }     
        else if(test[i] == 0){
            cout << "Missing Number is : " << i << endl;
        }
    }
    cout << endl;
}


int main(){
    
    int arr[4] = {3,3,2,1};
    findNumber(arr,4);
    return 0;
}