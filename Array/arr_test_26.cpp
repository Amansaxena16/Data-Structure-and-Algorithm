#include<iostream>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n){
    int i = 0;
    int j = 0;

    while(i < m){

        if(nums1[i] < nums2[j]){
            swap(nums1[i], nums2[j]);
            i++;
            j++;
        }
        else if(nums1[i] > nums2[j]){
            swap(nums1[i],nums2[j]);
            i++;
        }
    }

    for(int i = 0; i < m; i++){
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