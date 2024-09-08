// writing a program union of two sorted array!!
#include<iostream>
#include<vector>
using namespace std;

void findUnion(int arr1[], int n, int arr2[], int m){
    int i = 0;
    int j = 0;
    vector<int> unionArray;
    while(i < n && j < m){
        if(arr1[i] <= arr2[j]){
            if(unionArray.size() == 0 ||unionArray.back() != arr1[i]){
                unionArray.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionArray.size() == 0 || unionArray.back() != arr2[j]){
                unionArray.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i < n){
        if(unionArray.size() == 0 ||unionArray.back() != arr1[i]){
                unionArray.push_back(arr1[i]);
            }
        i++;
    }
    while(j < m){
        if(unionArray.size() == 0 || unionArray.back() != arr2[j]){
                unionArray.push_back(arr2[j]);
            }
        j++;
    }

    for(int i = 0; i < unionArray.size(); i++){
        cout << unionArray[i] << "\t";
    }
}

int main(){
    
    int arr1[6] = {1,1,2,3,4,4};
    int arr2[7] = {2,3,7,8,8,9,9};
    findUnion(arr1,6,arr2,7); 
    return 0;
}