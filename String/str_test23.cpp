// writing a program to construct a key sequence into its equivalent Mobile Numeric keypad!!
#include<iostream>
using namespace std;

int main(){
    char a[] = "2";
    char b[] = "22";
    char c[] = "222";
    char d[] = "23";
    char e[] = "33";
    char f[] = "333";
    char g[] = "4";
    char h[] = "44";
    char i[] = "444";
    char j[] = "5";
    char k[] = "55";
    char l[] = "555";
    char m[] = "6";
    char n[] = "66";
    char o[] = "666";
    char p[] = "7";
    char q[] = "77";
    char r[] = "777";
    char s[] = "7777";
    char t[] = "8";
    char u[] = "88";
    char v[] = "888";
    char w[] = "9";
    char x[] = "99";
    char y[] = "999";
    char z[] = "9999";

    
    char str[10];
    cout << "Enter a string to find its KeyPad Number : ";
    cin >> str;

    for(int i = 0; str[i] != '\0'; i++){
        cout << "KeyPad values are : " << str[i];
    }
    return 0;
}