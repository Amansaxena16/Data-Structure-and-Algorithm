// writing a program to find the valid anagram in a string!!
#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string s, string t){
    int sCount = 0;
    int tCount = 0;
    int sLen = s.length();
    int tLen = t.length();

    if(sLen != tLen){
        return false;
    }

    for(int i = 0; i < sLen; i++){
        sCount = sCount + s[i];
        tCount = tCount + t[i];
    }

    if(sCount == tCount){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    string s = "car";
    string t = "cat";
    cout << isAnagram(s,t) << endl;
    return 0;
}