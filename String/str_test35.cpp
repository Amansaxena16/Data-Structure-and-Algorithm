// writing a program to find the permutation in a string!!
#include<iostream>
using namespace std;

bool isFreqSame(int freq1[], int freq2[]){
    for(int i = 0; i < 26; i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }

    return true;
}

bool checkInclusion(string s1, string s2){ 
    int frequency[26] = {0};

    // adding the count of each letter in frequency array
    for(int i = 0; i < s1.length(); i++){
        frequency[s1[i] - 'a']++;
    }

    int windowSize = s1.length();
    for(int i = 0; i < s2.length(); i++){
        int windowFreq[26] = {0};

        for(int j = i; j < i + windowSize && j < s2.length(); j++){
            windowFreq[s2[j] - 'a']++;
        }

        if(isFreqSame(frequency,windowFreq)){
            return true;
        }
    }

    return false;
}

int main(){
    
    string s1 = "ab";
    string s2 = "a";
    cout << checkInclusion(s1,s2) << endl;
    return 0;
}