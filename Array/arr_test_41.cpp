// writing a program to find the duplicates in an array!!
#include<iostream>
#include<unordered_map>
using namespace std;

bool findDuplicate(int arr[], int n){
    unordered_map<int, int> count;

    for(int i = 0; i < n; i++){
        if(count.find(arr[i]) == count.end()){
            count[arr[i]] = 1;
        }
        else{
            count[arr[i]]++;
        }

        if(count[arr[i]] == 2){
            cout << arr[i] << endl;
            return true;
        }
    }

    return false;
}

int main(){
    
    int arr[4] = {1,2,3,4};
    cout << findDuplicate(arr,4) << endl;
    return 0;
}