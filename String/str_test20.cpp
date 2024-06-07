// writing a program to revome the duplicate character in a word/string
#include <iostream>
#include <string>
using namespace std;

void removeChar(string s) {
    int len = s.length();
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (s[i] == s[j]) {
                // Left shift 
                for (int k = j; k < len - 1; k++) {
                    s[k] = s[k + 1];
                }
                s.pop_back();  
            }
        }
    }

    cout << s;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    removeChar(s);
    return 0;
}