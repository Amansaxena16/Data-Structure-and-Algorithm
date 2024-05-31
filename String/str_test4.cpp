// writing a program to check whether char are their in 1 string and second string!!
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int flag;
    char str1[] = "greater noida";
    char str2[] = "gr noida";

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for(int i = 0; i < len2-1; i++){ // string 2 loop
        flag = 0;
        for(int j = i; j < len1-1; j++){ // string 1 loop
            if(str2[i] == str1[j]){
                flag = 1; 
                break;
            }
        }
        if(flag == 0){
            break;
        }
    }

    if(flag == 1){
        cout << "string 2 is present in string 1 in sequence!!";
    }
    else{
        cout << "String 2 is not present in string 1!!";
    }
    return 0;
}