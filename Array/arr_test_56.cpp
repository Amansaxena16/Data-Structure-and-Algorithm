// writing a program to find the duplicates in an array of N + 1 integer
#include<iostream>
#include<unordered_map>
using namespace std;

void findDuplicates(int arr[], int n){
    unordered_map<int,int> countElement;

    for(int i = 0; i < n; i++){
        if(countElement.find(arr[i]) != countElement.end()){
            countElement.insert({arr[i],1});
        }
        else{
            countElement[arr[i]]++;
            if(countElement[arr[i] == 2]){
                cout << "Duplicate Element is : " << arr[i] << endl;
                break;
            }
        }
    }
}

int main(){
    
    int arr[6] = {1,3,4,2,2};
    findDuplicates(arr,6);
    return 0;
}