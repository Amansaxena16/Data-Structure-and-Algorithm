// writing a program to print n character into the string1 of string2 
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[15] = "aman";
    char str2[10] = "saxena";

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int n;
    cout << "Enter the numbers of char you want to copy into the string1 : ";
    cin >> n;

    if(n > len2){
        cout << "Input should be smaller than the number of char!! ";
    }
    else{
        int j = 0;
        for(int i = len1; i <= len1 + n; i++){
            str1[i] = str2[j];
            j++;
        }
    }

    cout << "New Word : " << str1;

}