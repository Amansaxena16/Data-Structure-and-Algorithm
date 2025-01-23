// writing a program to find the string in valid palindrome or not!!
#include<iostream>
using namespace std;

bool checkAplhaNum(char s){
    if(s >= '0' && s <= '9' || tolower(s) >= 'a' && tolower(s) <= 'z'){
        return true;
    }
    return false;
}

bool findPalindrome(string s){
    int i = 0;
    int j = s.length() - 1;

    while(i < j){
        if(!checkAplhaNum(s[i])){
            i++;
        }
        if(!checkAplhaNum(s[j])){
            j--;
        }

        if(towlower(s[i]) != tolower(s[j])){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    string s = "Ac3?e3c&a";
    cout << findPalindrome(s) << endl;

    return 0;
}