#include<iostream>
using namespace std;

bool unique_occurence(int arr[], int total_length);
int main() {
    int size = 10; 
    int arr[size] = {3,2,1,2,2,3,7,7,7,7};
    bool ans = unique_occurence(arr,size);
    cout << ans;
    return 0;
}

bool unique_occurence(int arr[], int total_length){
    // int size = sizeof(arr);
    // int element_size = sizeof(arr[0]);
    // int total_length = size/element_size; 
    // cout << "upper : " << total_length << endl;
    
    for(int i = 0; i < total_length; i++){
        for(int j = i+1; j < total_length; j++){   // Making the Array in Increasing Order
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
        }
    }
    }
    
    int new_size = (arr[total_length - 1] - arr[0]) + 1;
    cout << "array size : " << new_size << endl;
    int store[new_size];
    for(int i = 0; i < new_size; i++){
        int count = 0;
        for(int j = 0; j < total_length; j++){ 
         // Counting the number of repetation of each number 
            if(i+1 == arr[j])
                count++;
        }
        if(count == 0){
            continue;
        }
        else{
            // cout << count << "\t";
            store[i] = count;
        }
    }

    // cout << "a" << endl;
    // for(int i = 0; store[i] != '\0'; i++){
    //     cout << store[i] << "\t";
    // }
    // cout << endl;
    // cout << "b" << endl;

    for(int i = 0; i < new_size - 1; i++){
        for(int j = i+1; j < new_size; j++){
            if(store[i]  == store[j]){
            return false;
        }
        }
    }

    return true; 
}

    