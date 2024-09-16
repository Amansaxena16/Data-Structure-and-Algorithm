// writing a program to find the sum of two numbers!!
#include<iostream>
#include<map>
#include<vector>
using namespace std;

vector<int> twoSum(int arr[], int n, int target){
    
    map<int, int> hmap;
    for(int i = 0; i < n; i++){
        int more = target - arr[i];

        if(hmap.find(more) != hmap.end()){
            return {hmap[more], i};
        }
        else{
            hmap.insert({arr[i],i});
        }
    }
    return {};
}


int main(){
    
    int arr[4] = {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(arr,4,target);

    if(!result.empty()){
        cout << "Number are :" << result[0] << "\t" << result[1];
    }
    else{
        "No pair found!!";
    }
    return 0;
}