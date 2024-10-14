#include<iostream>
using namespace std;

int compress(char chars[], int n){

    // int count = 0;
    // for(int i = 0; i < n; i++){
    //     count = 0;
    //     for(int j = i; j < n; j++){
    //         if(chars[i] == chars[j]){
    //             count++;
    //         }
    //     }
    // }

    // printing the values 
    for(int i = 0; i < n; i++){
        cout << chars[i] << "\t";
    }
    cout << "hi";
    cout << "hi" << endl;

    return 0;
}

int main(){
    
    char chars[7] = {'a','a','b','b','c','c','c'};
    compress(chars,7);
    return 0;
}