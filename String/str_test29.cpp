// writing a program to find the valid anagram in a string!!
#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string s, string t){

    if(s.length() != t.length()){
        return false;
    }

    int count[26] = {0};

    // increasing the count by 1 at count array index
    for(int i = 0; i < s.length(); i++){
        count[s[i] - 'a']++; // Increment for string `s`
        count[t[i] - 'a']--; // Decrement for string 't'    
    }

    // checking the index of the array, if not equal to 0 then false else true
    for(int i = 0; i < 26; i++){
        if(count[i] != 0){
            return false;
        }
    }
    return true;
}


int main(){
    
    string s = "cat";
    string t = "cat";
    cout << isAnagram(s,t) << endl;
    return 0;
}