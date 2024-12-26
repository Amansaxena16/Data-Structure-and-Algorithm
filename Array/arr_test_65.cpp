// Two Sum
#include<iostream>
#include<unordered_map>
using namespace std;

void twoSum(int arr[], int n, int target){
    unordered_map<int,int> hmap;

    for(int i = 0; i < n; i++){
        int num = target - arr[i];
        if(hmap.find(num) != hmap.end()){
            cout << hmap[num] << " " << i << endl;
            break;
        }
        else{
            hmap.insert({arr[i],i});
        }
    }
}

int main(){
    
    int arr[4] = {2,7,11,15};
    twoSum(arr,4,9);
    return 0;
}