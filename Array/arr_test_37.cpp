// writing a program to find the duplicate number from an array!!
#include<iostream>
#include<unordered_map>
using namespace std;

int findDuplicate(int arr[], int n){
    
    unordered_map<int,int> count;
    for(int i = 0; i < n; i++){
        // first finding the array...if not found then insert a value with 1
        if(count.find(arr[i]) == count.end()){
            count[arr[i]] = 1; // inserting the value
        }
        else{
            count[arr[i]]++; // if found then increment the value by 1
        }

        if(count[arr[i]] == 2){ // if arr[i] index value count is greater then 1 then return the value
            return arr[i];
        }
    }
    return 0;
}

int main(){
    
    int arr[5] = {1,3,4,2,2};
    cout << "Duplicate value is : " << findDuplicate(arr,5) << endl;
    return 0;
}