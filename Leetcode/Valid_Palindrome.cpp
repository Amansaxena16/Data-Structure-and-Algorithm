// writing a program to check if a sentence is a palindrome or not, converting all the upper case into lower case and accepting aplhabets and numbers!!
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

char convertLower(char temp){
    if(temp >= 'A' && temp <= 'Z'){
        temp = temp - 'A' + 'a';
        return temp;
    }
    else{
        return temp;
    }
}

bool isPalindrome(string s){
    int len = s.length();
    char temp[len];
    temp[0] = '\0';
    int j = 0;

    for(int i = 0; s[i] != '\0'; i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')){
            temp[j] = s[i];
            j++;
        }
    } 

    temp[j] = '\0';

    int start = 0;
    int end = (strlen(temp)) - 1;

    while(start <= end){

        if(convertLower(temp[start]) == convertLower(temp[end])){
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

    string s;
    cout << "Enter a string : ";
    getline(cin,s);

    if(isPalindrome(s) == true){
        cout << "The String you have Entered is palindrome!!";
    }
    else{
        cout << "The String You have Entered is not a palindrome, TRY AGAIN!!";
    }
    return 0;
}