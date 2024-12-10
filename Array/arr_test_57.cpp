// writing a program to find the repeating and missing number from an array!!
#include<iostream>
using namespace std;

void findElement(int arr[], int n){
    int find[4 + 1] = {0};
    int missing = 0;

    for(int i = 0; i < n; i++){
        find[arr[i]]++;
    }

    for(int i = 1; i < n + 1; i++){
        if(find[i] == 0){
            missing = i;
        }
        if(find[i] == 2){
            cout << "Repeating Number is : " << find[i] << endl;
        }
    }

    cout << "Missing Number is : " << missing << endl;
}

int main(){
    
    int arr[4] = {1,2,2,4};
    findElement(arr,4);
    return 0;
}