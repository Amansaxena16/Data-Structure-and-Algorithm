#include<iostream>
using namespace std;

int main(){
    int i;
    for(i = 1; i <= 4; i++){
        for(int j = i; j <= 4; j++){
            cout << "+" << " ";
        }
        // for(int k = 1; k < i; k++){  ** This loop is printing spaces in the pattern **
        //     cout << " ";
        // }
        cout << "\n";
    }
}