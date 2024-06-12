#include<iostream>
#include<cstring>
using namespace std;

void replaceString(char text[], char patt[], int start, int end){
    char newPatt[10] = "APT";

    int newPattLen = strlen(newPatt);
    int pattlen = end;

    if(newPatt > pattlen){
        
    }
    if else(newPattLen < pattlen){

    }

    int j = 0;

    for(int i = start; i < start + end; i++){
        text[i] = newPatt[j];
        j++;
    }

    cout << text << endl;
}

int main(){
    char text[20] ="ABCDABCF";
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