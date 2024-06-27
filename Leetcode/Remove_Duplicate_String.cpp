#include <iostream>
#include <string>
using namespace std;

// Function to check if there are any adjacent duplicates in the string
bool recheck(const string& s){
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            return false;
        }
    }
    return true;
}

// Function to remove a segment of the string starting at index 'start' and of length 'count'
string rightShift(string s, int start, int count){
    for (int i = start + count; i < s.length(); i++) {
        s[i - count] = s[i];
    }
    s.resize(s.length() - count);
    return s;
}

// Function to remove adjacent duplicates
string removeDuplicates(string s) {
    int start = -1;
    
    // Find the first pair of adjacent duplicates
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            start = i;
            break;
        }
    }

    // If no duplicates are found, return the string
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

    // Remove the segment with duplicates
    s = rightShift(s, start, count);
    cout << s << endl;

    if(s.size() == 1){
            return s;
        }

    if (s.empty()) {
        return "";
    }

    // Recursively remove remaining duplicates
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
