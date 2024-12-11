// writing a program to find the majority element which is (n / 2) time in an array!!
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
            if(count < 0){
                count = 0;
                element = arr[i];
            }
        }
    }

    cout << "Majority Element is : " << element << endl;
}

int main(){
    
    int arr[10] = {2,2,1,1,2,2,1,2,4,5};
    majorityElement(arr,10);
    return 0;
}