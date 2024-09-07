// writing a program to remove the duplicate number from array and returning the number of unique numbers!!
#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n){
    int count = 1;
    int i = 0;
    for(int j = 1; j < n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
            count++;
        }
    }

    for(int i = 0; i < count; i++){
        cout << arr[i] << endl;
    }
    return count;
}

int main(){
    
    int arr[6] = {0,0,1,1,2,2};

    cout << "Unique Numbers are : " << removeDuplicates(arr,6);
    return 0;
}