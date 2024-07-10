// writing a program to find the occurance of the index in the string!!
// leetcode - 28;

#include<iostream>
using namespace std;

int strStr(string haystack, string needle) {
    int index = 0;
    int j = 0;

    for(int i = 0; haystack[i] != '\0'; i++){
        if(needle[0] == haystack[i]){
            index = i;
        }
        if(needle[j] == haystack[i]){
            if(needle[j+1] == '\0'){
                return index;
            }
            j++;
        } 
        else{  
            j = 0;
        }
    }

    return -1;
}

int main(){
    
    string haystack = "hello";
    string needle = "ll";
    
    cout << strStr(haystack,needle);
    return 0;
}