// writing a program to print all the char after the last 'a' 
#include<iostream>
using namespace std;

int main(){

    // FIRST LOGIC

    char str[12] = "allahabad";
    // char temp[12];

    // for(int i = 0; str[i] != '\0'; i++){
    //     if(str[i] == 'a'){
    //         for(int j = i+1; str[j] != '\0'; j++){
    //             int a = 0;      
    //             if(str[j] == 'a'){
    //                 break;
    //             }
    //             temp[a] = str[j];
    //             a++;
    //         }
    //     }
    // }

    // cout << "New Word : " << temp;


    // SECOND LOGIC

    int a = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a'){
            a = i;
        }
    }

    for(int i = a + 1; str[i] != '\0'; i++){
        cout << str[i];
    }
    return 0;   
}