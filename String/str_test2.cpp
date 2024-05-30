// writing a program to reverse a string enter from a user
#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char ch[20];
    cout << "Enter a string : ";
    gets(ch);

    for(int i = 0; ch[i] != '\0'; i++){
        cout << ch[i];
    } 
    cout << endl;
    int len = strlen(ch);

    for(int i = len-1; i >= 0; i--){
        cout << ch[i];
    }
    return 0;
}