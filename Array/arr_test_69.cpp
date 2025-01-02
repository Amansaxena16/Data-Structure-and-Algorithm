// buy and sell stock part - 2!!
#include<iostream>
using namespace std;

void maxProfit(int arr[], int n){
    int profit = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i - 1]){
            profit = profit + (arr[i] - arr[i -1]);
        }
    }

    // printing the profit
    cout << "Max profit : " << profit << endl;
}

int main(){
    
    int arr[8] = {5,2,7,3,6,1,2,4};
    maxProfit(arr,8);
    return 0;
}