#include<iostream>
#include<cstring>
using namespace std;


int main() {
    char str[10];
    cout << "Enter a String to convert in sorted order : ";
    gets(str);


    for(int i = 0; str[i] != '\0';i++){
        int j = 0;
        for(int j = i+1; str[j] != '\0'; j++){
            if(str[i] > str[j]){
                swap(str[i],str[j]);
            }
        }
    }    

    cout << str;
    return 0;
}