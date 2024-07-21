// writing a program to find the number of prime number till that number!!

#include<iostream>
#include<vector>
using namespace std;

void countPrime(int n){
    int count = 0;
    vector<bool> arr(n+1, true);
    arr[0] = arr[1] = false;

    for(int i = 2; i < n; i++){
        if(arr[i] == true){
            count++;

            for(int j = i; j < n; j=j+i){
                arr[j] = false;
            }
        }
    }

    cout << "Count of Prime Numbers are : " << count << endl;
}

int main(){
    
    int n;
    cout << "Enter a number : ";
    cin >> n;
    countPrime(n);
    return 0;
}