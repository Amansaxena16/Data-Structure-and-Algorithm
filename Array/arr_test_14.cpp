// writing a program of intersection of two sorted array!!
#include<iostream>
#include<vector>
using namespace std;

void findIntersection(int arr1[], int n, int arr2[], int m){
    vector<int> insertArr;
    int i = 0; 
    int j = 0;
    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            insertArr.push_back(arr1[i]);
            i++;
            j++;
        }
        if(arr1[i] > arr2[j]){
            j++;
        }
        if(arr2[j] > arr1[i]){
            i++;
        }
    }

    for(int i = 0; i < insertArr.size(); i++){
        cout << insertArr[i] << "\t";
    }
}

int main(){
    
    int arr1[6] = {1,2,2,3,4,5};
    int arr2[7] = {1,2,2,2,3,5,6};
    findIntersection(arr1,6,arr2,7);
    return 0;
}