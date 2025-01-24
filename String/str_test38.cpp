// writing a program to find the longest common prefix!!
#include<iostream>
using namespace std;

void longestCommonPrefix(string str[], int n){
    bool flag = true;
    string prefixChars = "";
    cout << n << endl;
    if(n == 1){
        cout << str[0] << endl;
        return;
    }

    for(int i = 0; i < str[0].size(); i++){
        for(int j = 1; j < n; j++){

            if(i >= str[j].size() || str[0][i] != str[j][i]){
                flag = false;
                break;
            } 
        }

        if(flag){
            prefixChars = prefixChars + str[0][i];
        }
        else{
            break;
        } 
    }

    if(prefixChars.size() == 0){
        cout << "No Prefix Found!!" << endl;
    }
    else{
        cout << "Prefix Characters are : " << prefixChars << endl;
    }
}

int main(){
    
    string str[] = {"flower","flow","flight"};
    int n = sizeof(str) / sizeof(str[0]);

    longestCommonPrefix(str,n);
    return 0;
} 