// writing a program to reverse a string
#include<iostream>
using namespace std;

void reverseString(string s){

    int len = s.length();

    int start = 0;
    int end = len - 1;

    while(start <= end){
        swap(s[start], s[end]);
        start++;
        end--;
    }

    cout << s;
}

int main(){

    string s;
    cout << "Enter a string : ";
    cin >> s;

    reverseString(s);
    return 0;
}