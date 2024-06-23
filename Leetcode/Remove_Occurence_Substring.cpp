// Writing a program to remove all the occurence of a substring!!
#include <iostream>
#include <string>
using namespace std;

string rightShift(string s, int i, int part_len) {
    s.erase(i, part_len);
    return s;
}

string removeOccurrences(string s, string part) {
    bool flag = true;
    int part_len = part.length();

    while(flag) {
        flag = false;
        char temp = part[0];

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == temp) {
                bool found = true;
                int count = 1;

                for(int j = 1; j < part.length(); j++) {
                    if(s[i + j] == part[j]) {
                        count++;
                    } else {
                        found = false;
                        break;
                    }
                }

                if(found) {
                    s = rightShift(s, i, part_len);
                    cout << "s :" << s << endl;
                    flag = true;
                    break;
                }
            }
        }

        // Check if any occurrence of part remains
        int b = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == part[b]) {
                b++;
                if(part[b] == '\0') {
                    flag = true;
                    break;
                }
            } else {
                b = 0;
            }
        }
    }

    return s;
}

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << "New String is : " << removeOccurrences(s, part) << endl;
    return 0;
}
