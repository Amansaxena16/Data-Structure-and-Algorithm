// writing a program to replace the space in a string and replace it with @40!!
#include<iostream>
#include <cstring>
#include <string>
using namespace std;

void insertString(char str[], string replace ,int i){
    int len_replace =  replace.length();
    int count = 0;
    for(int j = i; j < (i + len_replace); j++){
        str[j] = replace[count];
        count++;
    }
}

void leftShift(char str[], int i, int len_replace){
    for(int k = 0; k < len_replace - 1; k++){
        int len = strlen(str);  
        for(int j = len; j > i; j--){
        str[j+1] = str[j];
        }
    }
}

string replaceSpace(char str[]){
    string replace = "@40";
    int len_replace =  replace.length();
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            leftShift(str,i,len_replace);
            insertString(str,replace,i);
        }
    }

    return str;
}
int main(){
    char str[30];
    cout << "Enter a String : ";
    gets(str);

    cout << "New String : " << replaceSpace(str);
    return 0;
}