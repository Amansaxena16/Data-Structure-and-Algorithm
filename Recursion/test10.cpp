//  writing a prgram to reverse the string using recursion!!
#include<iostream>
#include<string>
using namespace std;

string reverseString(string str, int len){
    if(len  == -1){
        return "";
    }
    else{
        cout << str[len];
        reverseString(str,len-1);
    }
}

int main(){
    
    string str = "animation";
    int len = str.length();
    reverseString(str,len);
    return 0;
}