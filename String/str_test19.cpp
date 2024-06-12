// writing a program to find the duplicate character in a string !!
#include<iostream>
#include<cstring>
using namespace std;

char FindDuplicate(char str[]){
    int len = strlen(str);

    for(int i = 0; i < len; i++){
        for(int j = i+1; j < len; j++){
            if(str[j] == str[i]){
                bool 
            }
        }
    }
}


int main(){

    char str[10];
    cout << "Enter a string to find the duplicate character : ";
    cin >> str;

    FindDuplicate(str);
    return 0;
}