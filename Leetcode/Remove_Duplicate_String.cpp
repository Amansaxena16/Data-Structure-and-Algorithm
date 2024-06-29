#include <iostream>
#include <string>
using namespace std;

bool recheck(const string& s){
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            return false;
        }
    }
    return true;
}

string rightShift(string s, int start, int count){
    for (int i = start + count; i < s.length(); i++) {
        s[i - count] = s[i];
    }
    s.resize(s.length() - count);
    return s;
}

string removeDuplicates(string s) {
    int start = -1;
    
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            start = i;
            break;
        }
    }

    if (start == -1) {
        return s;
    }

    int count = 0;
    for (int i = start; i < s.length(); i++) {
        if (s[start] == s[i]) {
            count++;
        } else {
            break;
        }
    }

    s = rightShift(s, start, count);
    cout << s << endl;

    if(s.size() == 1){
            return s;
        }

    if (s.empty()) {
        return "";
    }

    if (!recheck(s)) {
        return removeDuplicates(s);
    } else {
        return s;
    }
}

int main() {
    string s = "aaaaaaaaa";
    cout << "string : " << removeDuplicates(s) << endl;
    return 0;
}
