// witting a program to copy the string2 data from one position and number of char into string1!!
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[15] = "shruti";
    char str2[10] = "saxena";

    int start;
    cout << "Enter a number from were you want to start from !! ";
    cin >> start;

    int n;
    cout << "How many char you want to copy : ";
    cin >> n;

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(n > len1){
        cout << "Input should be smaller than the length of string 1!! ";
    }
    else{
        int j = len1;
        for(int i = start; i < start + n; i++){
            str1[j] = str2[i];
            j++;
        }
    }

    cout << "New Word : " << str1;

    return 0;
}