// writing a program to find the string 1 into string 2 and returning true or false!!
#include<iostream>
#include<string>
using namespace std;

bool checkInclusion(string s1, string s2){
    int apha[26] = {0}; 
    for(int i = 0; s1[i] != '\0'; i++){
        int index = s1[i] - 'a';
        if(apha[index] != 1){
            apha[index]++;
        }
    }   

    int windowSize = s1.length();
    int inLine = 0;

    for(int i = 0; i <= s2.length() - windowSize; i++){
        inLine = 0; 
        for(int j = i; j < (j + windowSize); j++){
            int index = s2[j] - 'a';
            if(apha[index] == 1){
                inLine++;
            } else {
                break;
            }
        }
        if(inLine == windowSize){
            return true;
        }
    }
    return false;
}


int main(){
    
    string s1 = "adc";
    string s2 = "dcda";
    
    if(checkInclusion(s1,s2)){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}