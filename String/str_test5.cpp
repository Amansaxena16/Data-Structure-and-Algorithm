// writing a program to copy string 2 into string 1
#include<iostream>
using namespace std;

int main(){
    char str1[10] = "anushka";
    char str2[10] = "fnushka";

    for(int i = 0; str1[i] != '\0'; i++){
        str1[i] = str2[i];
    }

    cout << "New Word : " << str1;
}