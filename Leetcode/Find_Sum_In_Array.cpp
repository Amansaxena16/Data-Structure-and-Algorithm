#include<iostream>
using namespace std;

int main(){
    int arr[6] = {2,4,7,5,11,1};
    int n;
    int add;

    cout << "Enter the Number of Elements you want to add!! ";
    cin >> n;
    int store_size = 6-n+1;
    int store[store_size];

    for(int i = 0; i < store_size; i++){
        add = 0;
       for(int j = i; j < i+n; j++){
        add = add + arr[j] ;
       }
       cout << add << "\t";
       store[i] = add;
    }
    cout << endl;
    
    for(int i = 0; i < store_size; i++){
        cout << store[i] << "\t";
    }

}