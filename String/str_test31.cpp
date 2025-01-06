// writig a program to find the string in palindrome or not !!
#include<iostream>
using namespace std;

bool checkPalindrome(string str){
    int s = 0;
    int e = str.length() - 1;

    while(s != e){
        if(str[s++] != str[e--]){
            return false;
        }
    }
    return true;
}

int main(){
    
    string str = "racecar";
    cout << checkPalindrome(str) << endl;
    return 0;
}