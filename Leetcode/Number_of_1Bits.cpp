#include<iostream>
using namespace std;

int hammingWeight(int n);

int main(){
    int n;
    cout << "Enter a Number to find its total number of set bits!! ";
    cin >> n;

    int total = hammingWeight(n);
    cout << "Number of 1's in " << n << " is " << total;
}

int hammingWeight(int n){
    int rem;
    int i = 0;
    int count = 0;
    int arr[100];
    int original = n;

    while(n != 0){
        rem = n % 2;
        n  = n / 2;
        arr[i] = rem;
        i++;
    }   

    cout << "Binary representation of " << original << " is: ";
    for(int k = i - 1; k >= 0; k--){
        cout << arr[k];
    }
    cout << endl;

    for(int j = 0; j < i; j++){
        if(arr[j] == 1){
            count++;
        }
    }

    return count;
}
