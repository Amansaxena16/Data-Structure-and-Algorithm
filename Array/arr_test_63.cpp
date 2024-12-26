// Best time to buy and sell stock!!
#include<iostream>
using namespace std;

int maxProfit(int arr[], int n){
    int min = arr[0];
    int profit = 0;

    for(int i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
        if(profit < arr[i] - min){
            profit = arr[i] - min;
        }
    }
    return profit;
}

int main(){
    
    int arr[5] = {7,6,4,3,1};
    cout << maxProfit(arr,5) << endl;
    return 0;
}