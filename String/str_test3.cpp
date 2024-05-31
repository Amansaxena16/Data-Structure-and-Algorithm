// writing a program to check whether a first string is similar to another string
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int flag = 0;
    char str1[] = "glbajaj";
    char str2[] = "GLbajaj";

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 != len2){
        cout << "String our not equal!! ";
    }
    else{
        for(int i = 0; i < len1-1; i++){
            if(str1[i] == str2[i] || str1[i]+32 == str2[i] || str1[i]-32 == str2[i]){
                flag = 1;
            }
            else{
                break;
            }
        }
    }

    if(flag == 1){
        cout << "String our Similar";
    }
    else{
        cout << "String  our not similar";
    }
    return 0;
}