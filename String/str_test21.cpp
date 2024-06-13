// Writing a program to find the pattern in a string and replacing it with the new pattern!!
#include<iostream>
#include<cstring>
using namespace std;

void replaceString(char text[], char patt[], int start, int end){
    int q = 0;
    char newpatt[5] = "ZZ";
    
    // Text Length 
    int textLen = strlen(text);

    // Length of both the Pattern
    int newPattLen = strlen(newpatt);
    int pattLen = end;

    // If New pattern Len is greater then Old pattern Length!! 
    if(newPattLen > pattLen){
        // Right Shift
        for(int i = textLen; i > (start+newPattLen) - 1; i--){
            text[i] = text[i-1];
        }
        cout << "After right shift : " << text << endl;
        // Inserting the values
        for(int j = start; j < (start + newPattLen); j++){
            text[j] = newpatt[q];
            q++;
        }
    }
    else if(newPattLen < pattLen){
        // Left shift
        int i = 0;
        for(i = (start + pattLen) - 1; text[i] != '\0'; i++){
            text[i-1] = text[i];
        }
        text[i-1] = '\0';
        
        // Inserting the new pattern into the string
        for(int j = start; j < (start + newPattLen); j++){
            text[j] = newpatt[q];
            q++;
        }
    }

    else{
        // Inserting the new pattern into the string
        for(int j = start; j < (start + newPattLen); j++){
            text[j] = newpatt[q];
            q++;
        }
    }

    cout << "Ans : " << text;
}

int main(){
    char text[20] ="ABCDEFGH";
    char patt[10] = "BC";

    int pattlen = strlen(patt);

    int j = 0;
    for(int i = 0 ; text[i] != '\0'; i++){
        if(text[i] == patt[j]){
            j++;

            if(patt[pattlen-1] == text[i]){
                // cout << "Index : " << (i - pattlen) + 1  << endl;
                int start = (i - pattlen) + 1;
                j = 0;
                replaceString(text,patt,start,pattlen);
            }
        }

    } 
    return 0;
}