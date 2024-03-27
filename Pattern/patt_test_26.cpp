#include<iostream>
using namespace std;

int main(){
    // for(int i = 1; i <= 2; i++){
    //     for(int j = 1; j <= 3; j++){
    //         cout << "k" << " ";
    //     }
    // }
    // for(int k = 1; k <= 1; k++){
    //         cout << k << " ";
    //     }


    for(int i = 1; i <= 4; i++){
        for(int j = i; j <= 3; j++){
            cout << " " << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << k << " ";
        }
        for(int l = 1; l < i; l++){
            cout << l << " ";
        }
        cout << "\n";
    }
}