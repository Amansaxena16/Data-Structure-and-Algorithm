// Chocolate Distribution Problem!!
#include<iostream>
#include<algorithm>
#include <limits.h>
using namespace std;

int findMinDiff(int arr[], int n, int m){

    // sorting the array
    sort(arr, arr + n);  

    int diff = INT_MAX;
    for(int i = 0; i+m-1 < n; i++){
        int current_diff = arr[i + (m - 1)] - arr[i];
        if(current_diff < diff){
            diff = current_diff;
        }
    }

    return diff;
}

int main(){
    
    int arr[5] = {8, 4 ,13, 8, 12};
    int student = 3;
    cout << findMinDiff(arr,5,student) << endl; 
    return 0;
}