// writing a program to find the majority element in an array which are more then n / 2 times
#include<iostream>
#include<unordered_map>
using namespace std;

int majorityElement(int arr[], int n){
    int count = 1;
    int element = arr[0];

    for(int i = 1; i < n ; i++){
        if(arr[i] == element){
            count++;
        }
        else{
            count--;
        }

        if(count == 0){
            element = arr[i];
            count = 1;
        }
    }

    return element;
}

int main(){
    
    int arr[7] = {2,2,1,1,1,2,2};
    cout << "Majority element is : " << majorityElement(arr,7) << endl;
    return 0;
}