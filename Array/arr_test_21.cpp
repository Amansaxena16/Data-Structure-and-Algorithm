// writing a program to find the element which is occured more then n/2 were (n is the size of the array)
#include<iostream>
#include<map>
using namespace std;

// This is using Moore Voting Algo (TC - (n) || SC - O(1))
int findMajorityElement(int arr[], int n){
    int count = 0;
    int element;

    for(int i = 0; i < n; i++){
        if(count == 0){
            count = 1;
            element = arr[i];
        }
        else if(arr[i] == element){
            count++;
        }
        else{
            count--;
        }
    }

    int count1 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == element){
            count1++;
        }
    }

    if(count1 > n/2){
        return element;
    }
    else{
        return -1;
    }
}

// This is using Hash Map (TC - (n) || SC - (n))
int majorityElement(int arr[], int n){
    map<int, int> hashMap;

    for(int i = 0; i < n; i++){
        hashMap[arr[i]]++;
    }
    for(auto i: hashMap){
        if(i.second > n/2){
            return i.first;
        }
    }

    return -1;
}   

int main(){
    
    int arr[9] = {2,2,1,3,1,1,3,1,1};
    cout << "Majority of Element using Hash Map is : " << majorityElement(arr,9) << endl; 
    cout << "Majority of Element using Moore voting Algo : " << findMajorityElement(arr,9);
    return 0;
}