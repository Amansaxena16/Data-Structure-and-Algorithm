// writing a program to rearrange the array element using sign(Here size of the array will be alwalys positive)!!
#include<iostream>
#include<vector>
using namespace std;

void rearrangeArray(int arr[], int n){
    int newArray[n] = {0};
    int post = 0;
    int neg = 1;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            newArray[post] =  arr[i];
            post = post + 2;
        }
        else{
            newArray[neg] =  arr[i];
            neg = neg + 2; 
        }
    }  

    for(int i = 0; i < n; i++){
        cout << newArray[i] << "\t";
    }
}

int main(){
    
    int arr[6] = {3,1,-2,-5,-2,-4};
    rearrangeArray(arr,6);
    return 0;
} 