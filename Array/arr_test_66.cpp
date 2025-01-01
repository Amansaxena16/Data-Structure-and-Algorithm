// Merge Sorted Array
#include<iostream>
using namespace std;

void merge(int nums1[], int n, int nums2[], int m){
    int i = (n - m) - 1;
    int j = m - 1;
    int k = n - 1;

    while(i >= 0 && j >= 0){
        if(nums1[i] < nums2[j]){
            nums1[k--] = nums2[j--];
        }
        else{
            nums1[k--] = nums1[i--];
        }
    }

    // printing the array
    for(int i = 0; i < n; i++){
        cout << nums1[i] << "\t";
    }
    cout << endl;
}

int main(){
    
    int nums1[6] = {1,2,3,0,0,0};
    int nums2[3] = {2,5,6};
    merge(nums1,6,nums2,3);
    return 0;
}