// writing a program to in which we have two sorted array and we have to sort them into one array!!
#include<iostream>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n){
    int i = m - 1;
    int j = n - 1;
    int k = (m + n) - 1;

    while(j >= 0){
    if(i >= 0 && nums1[i] > nums2[j]){
        nums1[k] = nums1[i];
        k--;
        i--;
    }
    else{
        nums1[k] = nums2[j];
        k--;
        j--;
    }
    }

    // printing the loop
    for(int i = 0; i < m + n; i++){
        cout << nums1[i] << "\t";
    }
    cout << endl;
}

int main(){
    
    int nums1[6] = {1,2,3,0,0,0};
    int nums2[3] = {2,5,6};
    merge(nums1,3,nums2,3);
    return 0;
}