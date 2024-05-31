// writing a program to copy string 2 data into string 1 with position of index value and number of char
#include<iostream>
using namespace std;

int main(){

    int char_posi = 0;
    int char_num = 0;

    cout << "Enter the number of index where you want to start : ";
    cin >> char_posi;

    cout << "Enter the number you want to copy : ";
    cin >> char_num;

    char str1[20] = "noida is bestest";
    char str2[20] = "india is not best";

    int j = 0;
    for(int i = char_posi; i < char_posi + char_num; i++){
        str1[j] = str2[i];
        j++;
    }

    cout << "New Word : " << str1;
    return 0;
}