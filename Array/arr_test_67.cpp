// writing a program to find the majority elements in an array!!
#include<iostream>
using namespace std;

void majorityElement(int arr[], int n){
    int count = 0;
    int element = arr[0];
    
    for(int i = 0; i < n; i++){
        if(arr[i] == element){
            count++;
        }
        else{
            count--;
        }

        if(count < 0){
            count = 0;
            element = arr[i];
        }
    }


    // printing the element
    cout << "majority element is : " << element << endl;
}

int main(){
    
    int arr[5] = {1,2,3,3,4};
    majorityElement(arr,5);
    return 0;
}