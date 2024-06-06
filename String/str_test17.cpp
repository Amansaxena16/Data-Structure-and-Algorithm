// writing a program to print all the duplicate character in a string 
#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str[30];
    cout << "Enter a string to find the duplicate character : ";
    gets(str);

    int len = strlen(str);

    char temp[len];

    int count;
    int j = 0;

    for(int i = 0; str[i] != '\0'; i++){
        count = 0;
        for(int j = i+1; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                count++;
            }
        }

        if(count >= 1){
            for(int k = 0; temp[k] != '\0'; k++){
                if(str[i] == temp[k]){
                    break;
                }
                else{
                    temp[j] = str[i];
                    j++;
                }
            }
        }

    }

    cout << temp;
    return 0;
}