// Merge Sorted Array
#include<iostream>
using namespace std;

void merge(int nums1[], int n, int nums2[], int m){
    int x = n - m - 1;
    int y = n;
    int z = m;

    while(z && x >= 0){
        if(nums1[x] < nums2[z]){
            nums1[y--] = nums2[z--];
        }
        else{
            nums1[y--] = nums1[x--];
        }
    }

    // printing the array
    for(int i = 0; i < n; i++){
        cout << nums1[i] << " ";
    }
    cout << endl;
}

int main(){
    
    int nums1[6] = {1,2,3,0,0,0};
    int nums2[3] = {2,5,6};
    merge(nums1,6,nums2,3);
    return 0;
}