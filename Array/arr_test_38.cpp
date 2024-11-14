// writing a program to find the missing and repeating number in a array!!
#include<iostream>
using namespace std;

void findNumber(int arr[], int n){
    int index = n + 1;
    int test[index] = {0};
    
    for(int i = 0; i < n; i++){
        test[arr[i]]++;
        if(test[arr[i]] == 2){
            cout << "Repeating Number is : " << arr[i] << endl;
        }     
    }

    for(int i = n; i > 0; i--){
        if(test[i] == 0){
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