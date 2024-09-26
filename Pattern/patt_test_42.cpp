#include<iostream>
using namespace std;

int main(){
    
    int n = 3;
    int k = 0;
    for(int i = 1; i <= n; i++){
        k = i;
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int j = i; j <= n; j++){
            cout << k++;
        }
        for(int j = i; j < n; j++){
            cout << k++;
        }
        cout << endl;
    }

    
    return 0;
}