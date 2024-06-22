// Writing a program to remove all the occurence of a substring!!
#include<iostream>
#include<string>
using namespace std;

string rightShift(string s, int i, int part_len){
    for(int j = 0; j < part_len; j++){
        int k = 0;
        for(k = i + 1; k < s.length(); k++){
            s[k-1] = s[k];
        }
        s[k - 1] = '\0';
    }
    return s;  
}

string removeOccurrences(string s, string part){
    bool flag = true;
    int part_len = part.length();

    while(flag == true){
        char temp = part[0];
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] == temp){
                bool found = false;
                i++;
                int count = 1;
                for(int j = 1; part[j] != '\0'; j++){
                    if(s[i] == part[j]){
                        count++;
                        i++;
                        found = true;
                    }
                    else{
                        i = i - count;
                        break;
                    }
                }

                if(found == true){
                    i = i - count;
                    s = rightShift(s,i,part_len);
                    cout << "s : " << s << endl;
                    break;
                }
            }
        }

        int b = 0;
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] == part[b]){
                b++;
                if(part[b] == '\0'){
                    flag = true;
                    break;
                }
            }
            else{
                b = 0;
                flag = false;
            }
        }
    }
}

int main(){
    
    string s = "axxxyyyb";
    string part = "xy";

    removeOccurrences(s,part);
    return 0;
}