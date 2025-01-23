// writing a program to remove the most occurences of a substring!!
#include<iostream>
using namespace std;

string removeOccurrences(string s, string part){

    while(s.find(part) < s.length()){
        int index = s.find(part);
        s.erase(index, part.length());
    }
    return s;
}

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << removeOccurrences(s,part)  << endl;
}