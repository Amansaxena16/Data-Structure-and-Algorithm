#include<iostream>
using namespace std;

int main(){
    int n = 3;

    for(int i = 1; i <= n; i++){
        int k = 1;
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int j = 1; j <= n-i+1; j++){
            cout << k;
            k++;
        }
        for(int j = 1; j <= n - i; j++){
            cout << k;
            k++;
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int j = 1; j <= n - i + 1; j++){
            cout << j;
        }
        for(int j = n - i + 1; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }

    cout << endl;


    
    return 0;
}