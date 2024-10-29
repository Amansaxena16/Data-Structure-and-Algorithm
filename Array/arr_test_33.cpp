// writing a program to find maximum profit from buying and selling of stock!!
#include<iostream>
using namespace std;

int maxProfit(int arr[], int n){
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
   
   return profit;
}

int main(){
    
    int arr[3] = {2,4,1};
    cout << "Maximum profit is : " << maxProfit(arr,3) << endl;
    return 0;
}