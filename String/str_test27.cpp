// writing a program to reverse the string !!
#include<iostream>
#include<string>
using namespace std;

void reverseString(string str){

    int len = str.length();
    for(int i = len; i >= 0; i--){
        cout << str[i];
    }
}

int main(){
    
    string str = "abcdef";
    reverseString(str);
    return 0;
}