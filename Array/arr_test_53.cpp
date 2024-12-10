// writing a program to best time to buy and sell stock
#include<iostream>
using namespace std;

void sellStock(int arr[], int n){
    int min = arr[0];
    int profit = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] - min > profit){
            profit = arr[i] - min;
        }
    }

    cout << "Maximum Profit is : " << profit << endl;
}

int main(){
    
    int arr[6] = {7,2,5,3,6,4};
    sellStock(arr,6);
    return 0;
}