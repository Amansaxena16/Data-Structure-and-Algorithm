// writting a program to check whether a string is palindrome or not!!
#include<iostream>
#include<cstring>
using namespace std;

bool checkPalindrome(char str[]){
    int j = 0;
    int len = strlen(str);
    char reverse[len];

    for(int i = len-1; i >= 0; i--){
        reverse[j] = str[i];
        j++;   
    }

    reverse[j] = '\0';

    int reveLen = strlen(reverse);

    if(len != reveLen){
        return false;
    }
    else{
        for(int i = 0; i <= len; i++){
            if(str[i] != reverse[i]){
                return false;
            }
        }
    }

    return true;
}

int main(){

    char str[10];
    cout << "Enter a string to check whether it is a palindrome or not : ";
    cin >> str;

    if(checkPalindrome(str) == true){
        cout << "String is Palindrome!!";
    }
    else{
        cout << "String is not a Palindrome!!";
    }
    return 0;
}