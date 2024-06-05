// writting a program to print all the char after first 'A'
#include<iostream>
using namespace std;

int main(){

    char str[12] = "kallahabad";

    for(int i = 0; str[i] != '\0'; i++){
        // cout << "hi";
        if(str[i] == 'a'){
            // cout << "hi";/
            for(int j = i; str[j] != '\0'; j++){
                cout << str[j];
            }
            break;
        }
    }
    return 0;   
}