#include<iostream>
using namespace std;


int main(){
    for(int k = 1; k <= 5; k++){
        for(int i = k; i < 5; i++){
        cout << " ";
        }
        for(int j = 1; j <= k; j++){
            cout << "*";
        }
        cout << endl;
    }
}
