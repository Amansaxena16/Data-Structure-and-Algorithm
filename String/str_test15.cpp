// writting a program to check if a string is palindrome or not, ignore whitespaces and symbols and convert all the upper case into lower case.
#include<iostream>
#include<cstring>
using namespace std;

char converLower(char str){
    if((str >= 'a' && str <= 'z') || (str >= 0 && str <= 9)){
        return str;
    }
    else{
        str = str - 'A' + 'a';
        return str;
    }
}

bool checkPalindrome(char str[]){
    int len = strlen(str);
    int start = 0;
    int end = len-1;

    while(start <= end){
        if(str[start] >= 'a' && )
        if(converLower(str[start]) == converLower(str[end])){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    
    return true;
}

int main(){

    char str[20];
    cout << "Enter a string to check if it is palindrome or not : ";
    cin >> str;

    if(checkPalindrome(str) == true){
        cout << "String is a palindrome";
    }
    else{
        cout << "String is not a palindrome";
    }

    return 0;
}