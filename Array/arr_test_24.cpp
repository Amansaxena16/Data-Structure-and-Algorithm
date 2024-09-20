// writing a program to find the Best time to buy and sell the stocks!!
#include<iostream>
using namespace std;

int maxProfit(int arr[], int n){
    int min = arr[0];
    int index = 0;
    int profit = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
            index = i;
        }
    }

    for(int i = index; i < n; i++){
        int value = arr[i] - min;
        if(value > profit){
            profit = value;
        }
    }
    if(profit == 0){
        return 0;
    }
    else{
        return profit;
    }
}

int main(){
    
    int arr[6] = {7,1,5,3,6,4};
    cout << "Maximum Profit is : " << maxProfit(arr,6);
    return 0;
}