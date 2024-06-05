// writing a program to concatinate to string in different string variable
#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str1[10] = "ram";
    char str2[10] = "shyam";

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    int j = 0;
    for(int i = len1; i <= len1 + len2; i++){
        str1[i] = str2[j];
        j++;
    }

    cout << str1;
    return 0;

}