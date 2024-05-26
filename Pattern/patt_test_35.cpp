#include<iostream>
using namespace std;

int main(){
    int n = 6;
    for(int i = 1; i <= n; i++){
        for(int j = i ; j <= n-1; j++){
            cout << " ";
        }
        int k;
        for(k = 1; k <= (i*2)-1; k=k+1){
            cout << "*";
        }
        cout << endl;
    }
}