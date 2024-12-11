// writing a program to find the valid anagram!!
#include<iostream>
#include<string>
using namespace std;

bool findAnagram(string s, string t){
    int arr[26] = {0};
    int sLen = s.length();
    int tLen = t.length();

    if(sLen != tLen){
        return false;
    }

    for(int i = 0; i < sLen; i++){
        arr[s[i] - 97]++;
        arr[t[i] - 97]++;
    }

    for(int i = 0; i < 26; i++){
        if(arr[i] == 1){
            return false;
        }
    }
    return true;

}

int main(){
    
    string s = "cat";
    string t = "cat";
    cout << findAnagram(s,t) << endl;
    
    return 0;
}