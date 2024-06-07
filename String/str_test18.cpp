// writing a program to check if a string is palindrome or not, ignoring all symbols and whitespaces and converting all the uppercase letter into lower case!!
#include<iostream>
#include<cstring>
using namespace std;

char toLowercase(char str){
    if((str >= 'a' && str <= 'z') || (str >= '0' && str <= '9')){
        return str;
    }
    else if(str >= 'A' && str <= 'Z'){
        str = str - 'A' + 'a';
        return str;
    }
    else{
        return str;
    }
}


bool checkPalindrome(char str[]){
    int len = strlen(str);
    int s = 0;
    inst e = len - 1;

    while(s <= e){

        if(!((str[s] >= 'a' && str[s] <= 'z') || (str[s] >= 'A' && str[s] <= 'Z') || (str[s] >= '0' && str[s] <= '9'))){
            s++;
        }

        if(!((str[e] >= 'a' && str[e] <= 'z') || (str[e] >= 'A' && str[e] <= 'Z') || (str[e] >= '0' && str[e] <= '9'))){
            e--;
        }

        if(toLowercase(str[s]) == toLowercase(str[e])){
            s++;
            e--;
        }
        else{
            return false;   
        }
    }

    return true;
}

int main(){

    char str[20];
    cout << "Enter a string to check if a string is palindrome or not : ";
    cin >> str;
    
    if(checkPalindrome(str) ==  true){
        cout << "The string is Palindrome";
    }
    else{
        cout << "The string is not a Palindrome";
    }

    return 0;
}