// writing a program to find the length of the last word!!
// leetcode - 58

#include<iostream>
using namespace std;

int lengthOfLastWord(string s){
    int len = s.size();
    int index = 0;
    
    for(int i = len; i >= 0; i--){
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            index = i;
            break;
        }

    }
    int count = 0;
    for(int i = index; i >= 0; i--){
        if(s[i] == ' '){
            break;
        }
        else{
            count++;
        }
    }
    return count;
}

int main(){
    
    string s = " qWnqNICa   ADGZNrBw  DdxMEuhNuvTJaETF   KhKKfVFX";
    cout << "Length of Last Word is : " << lengthOfLastWord(s);
    return 0;
}