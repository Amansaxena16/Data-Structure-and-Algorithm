// writing a program to find the duplicate character in a string !!
#include<iostream>
#include<cstring>
using namespace std;

char FindDuplicate(char str[]){
    int len = strlen(str);
    char temp[len];
    temp [0] = '\0';
    int count;

    for(int i = 0; i < len; i++){
        count = 0;
        for(int j = i; j < len; j++){
            if(str[i] == str[j]){
                for(int k = 0; temp[k] != '\0'; k++){
                    if(str[i] == temp[k]){
                        break;
                    }
                    else{
                        count++;
                    }
                }
            }
        }
        int t = 0;
        if(count > 1){
            temp[t] = str[i];
            t++;
        }
    }

    cout << "Duplicate Charaters are : " << temp;
}

int main(){

    char str[10];
    cout << "Enter a string to find the duplicate character : ";
    cin >> str;

    FindDuplicate(str);
    return 0;
}