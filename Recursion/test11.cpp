// writing a program to check if a string is palindrome or not!!
#include<iostream>
using namespace std;

bool reverseElement(string str, int i, int j){
    if(i > j){
        return true;
    }
    else{
        if(str[i] == str[j]){
            i++;
            j--;
            return reverseElement(str,i,j);
        }
        else{
            return false;
        }
    }
}

int main(){
    
    string str = "abcddcba";
    int len = str.length();
    int i = 0;
    int j = len - 1;
    
    if(reverseElement(str,i,j)){
        cout << "The string is Palindrome!!";
    }
    else{
        cout << "The string is not a Palindrome!!";
    }
    return 0;
}