// writing a program to compare two strings char
#include<iostream>
using namespace std;

int main(){
    int flag = 0;
    char string1[] = "GLBAJAJ";
    char string2[] = "GLBAJAJ";

    int l1,l2 = 0;
    int i;
    for(i = 0; string1[i] != '\0'; i++);
    l1 = i;
    for(i = 0; string2[i] != '\0'; i++);
    l2 = i;

    // Checking String length
    if(l1 != l2){
        cout << "Strings our not equal!!";
    }

    // Checking the character are equal or not
    else{
        for(int i = 0; i < l1-1; i++){
            if(string1[i] != string2[i]){
                flag = 1;
                break;
            }
        }
    }

    if(flag == 1){
        cout << "strings our not equal";
    }
    else{
        cout << "String our equal";
    }
}