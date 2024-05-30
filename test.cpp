#include<iostream>
using namespace std;


int main() {
    int n =4;
    int arr[n] = {1,7,9,11};

    for(int i = n-1; i > 0; i--){
        arr[i] = arr[i-1];
    }

    arr[1] = 0;

    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
    return 0;
}
