// writing a program to find the next permutation from an array!!
#include<iostream>
#include<algorithm>
using namespace std;

void nextPermutation(int arr[], int n){
    int dipIndex = -1;

    // finding the dip index in the array
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] < arr[i + 1]){
            dipIndex = i;
            break;
        }
    }

    // finding the exact largest value in the array
    for(int i = n - 1; i >= dipIndex; i--){
        if(arr[i] > arr[dipIndex]){
            swap(arr[i],arr[dipIndex]);
            break;
        }
    }
    // sorting the element after the dipIndex
    int i = dipIndex + 1;
    int j = n -1;

    while(i < j){
        swap(arr[i++],arr[j--]);
    }

    // printing the array
    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
}

int main(){
    
    int arr[7] = {2,3,5,4,1,0,0};
    nextPermutation(arr,7);
    return 0;
}