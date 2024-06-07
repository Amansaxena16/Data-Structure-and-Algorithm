// writing a program to reverse the words in a sentence!!
#include<iostream>
using namespace std;

void reverseWord(string str){
    int start = 0;
    int len = str.length();

    for(int i = 0; i <= len; i++){
        int end = 0;
        if(str[i] == ' ' || str[i] == '\0'){
            end = i-1;
            while(start <= end){
                swap(str[start], str[end]);
                start++;
                end--;
            } 
        start = i+1;
        }
    }

    cout << str;
}

int main(){

    string str;
    cout << "Enter a String : ";
    getline(cin,str);

    reverseWord(str);
    return 0;
}