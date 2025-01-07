// writig a program to find the string in palindrome or not !!
#include<iostream>
using namespace std;

bool isAlphaNumeric(char s){
    if(s >= '0' && s <= '9' || tolower(s) >= 'a' && tolower(s)<= 'z'){
        return true; 
    }

    return false;
}

bool checkPalindrome(string str){
    int s = 0;
    int e = str.length() - 1;

    while(s < e){
        if(!isalnum(str[s])){
            s++;
            continue;
        }
        if(!isalnum(str[e])){
            e--;
            continue;
        }
        if(tolower(str[s]) != tolower(str[e])){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
 
int main(){
    
    string str = "Ac3?e3c&a";
    cout << checkPalindrome(str) << endl;
    return 0;
}