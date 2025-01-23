// writing a program to find the permutation in a string!!
#include<iostream>
using namespace std;

bool checkInclusion(string s1, string s2){ 
    int frequency[26] = {0};
    int windowFreq[26] = {0};

    // adding the count of each letter in frequency array
    for(int i = 0; i < s1.length(); i++){
        frequency[s1[i] - 'a']++;
    }

    // 
    return true;
}

int main(){
    
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout << checkInclusion(s1,s2) << endl;
    return 0;
}