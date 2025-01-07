// writing a program in which it remove the occurence of a particular string from a string!!
#include<iostream>
using namespace std;

string removeOccurence(string s, string t){

    while(s.length() > 0 && s.find(t) < s.length()){
        int i = s.find(t);
        s.erase(i,t.length());
    }
    return s;
} 
 
int main(){
    
    string s = "daabcbaabcbc";
    string t = "abc";
    cout << removeOccurence(s,t) << endl;
    return 0;
}