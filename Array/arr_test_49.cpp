// writing a program to find the sum of triplet element such that arr[i] != arr[j] != arr[k]!!
#include<iostream>
using namespace std;

void threeSum(int arr[], int n){
    int i = 0;
    int j = 1;
    int k = 2;
    int sum = 0;

    for(int x = 0; x < n - 2; x++){
        sum = arr[i] + arr[j] + arr[k];

        if(sum == 0 && arr[i] != arr[j] && arr[i] != arr[k] && arr[j] != arr[k]){
            cout << arr[i] << "\t" << arr[j] << "\t" << arr[k] << endl;
            i++;
            j++;
            k++;
        }
    }
}

int main(){
    
    int arr[6] = {-1,0,1,2,-1,-4};
    threeSum(arr,6);
    return 0;
}