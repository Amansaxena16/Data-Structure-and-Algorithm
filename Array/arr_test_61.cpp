// writing a program to remove the duplicate number in sorted array!!
#include<iostream>
using namespace std;

int removeDuplicate(int arr[], int n){
    int i = 0;
    int j = i + 1;
    int count = 1;

    while(j < n){
        if(arr[i] != arr[j]){
            i++;
            swap(arr[i],arr[j]);
            count++;
            j++;
        }
        else{
            j++;
        }
    } 

    // printing the array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return count;
}

int main(){

    int arr[10] = {0,0,1,1,1,2,2,3,3,4};
    cout << removeDuplicate(arr,10) << endl; 

    return 0;
}