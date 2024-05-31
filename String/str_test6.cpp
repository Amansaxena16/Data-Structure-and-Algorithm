// writing a program to copy string 2 data into string 1 upto n position
#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the Number of string you want to copy : ";
    cin >> n;

    char str1[15] = "greaternoida";
    char str2[15] = "youtubeindia";

    for(int i = 0; i < n; i++){
        str1[i] = str2[i];
    }

    cout << "New Word : " << str1;
    return 0;
}