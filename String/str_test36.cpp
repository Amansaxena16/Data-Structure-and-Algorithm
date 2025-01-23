// writing a program to reverse the words in the string!!
#include<iostream>
#include<algorithm>
using namespace std;

void reverseStr(string str){
    reverse(str.begin(), str.end());
    
    int i = 0;
    string newStr = "";
    while(i < str.length()){
        string word = ""; 
        while(str[i] != ' ' && i < str.length()){
            word = word + str[i];
            i++;
        }
        reverse(word.begin(), word.end());

        if(word.length() > 0){
            newStr = newStr + " " + word;
        }
        i++;
    }
    cout << "Reverse string is : " << newStr << endl;
}

int main(){
    
    string str = "the sky is blue";
    reverseStr(str);

    return 0;
}