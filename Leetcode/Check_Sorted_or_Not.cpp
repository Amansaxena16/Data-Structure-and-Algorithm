#include<iostream>
using namespace std;

// Approach 1st  

// int findMinimum(int nums[], int n){
//     int index;
//     int min = nums[0];

//     for(int i = 0; i < n; i++){
//         if(min >= nums[i]){
//             min = nums[i];
//             index = i;
//         }
//     }

//     return index;
// }

// int CheckSorted(int nums[], int n, int index){
//     int newArray[n];
//     int j = 0;

//     // Right Shift start from here
//     for(int i = index; i < n; i++){
//         newArray[j] = nums[i];
//         j++;
//     }

//     for(int i = 0; i < index; i++){
//         newArray[j] = nums[i];
//         j++;
//     }
    
//     // checking if it is sorted or not
//     for(int i = 0; i < n; i++){
//         if(newArray[i] > newArray[i+1]){
//             return false;
//         }
//         else{
//             return true;
//         }
//     }
// }

// Approach 2nd 

int findMinimum(int nums[], int n) {
    int count = 0;

    for(int i = 1; i < n; i++){
        if(nums[i - 1] > nums[i]){
            count++;
        }
    }

    if(nums[n - 1] > nums[0]){
        count++;
    }

    if(count <= 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n = 3;
    int nums[n] = {6,10,6};
    // int index = findMinimum(nums,n);
    // cout << index ;
    // CheckSorted(nums,n,index);

}