// writing a program to find the unique number from an array !!
#include<iostream>
#include<unordered_map>
using namespace std;

int findUnique1(int arr[], int n){
    //  This is using Hap map!!
    unordered_map<int, int> findCount;

    for(int i = 0; i < n; i++){
        findCount[arr[i]]++;
    }

    for(const auto& pair: findCount){
        if(pair.second == 1){
            return pair.first;
        }
    }

    return 0;
}

int findUnique2(int arr[], int n){
    // This is using ^ , in ^ two same values get 0..... eg-> (2 ^ 2 = 0)
    int ans = 0;

    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main(){
    
    int arr[5] = {6, 6, 7, 10, 7};
    cout << "unique number is : " << findUnique1(arr,5) << endl;
    cout << "unique number is : " << findUnique2(arr,5) << endl;
   
    return 0;
}