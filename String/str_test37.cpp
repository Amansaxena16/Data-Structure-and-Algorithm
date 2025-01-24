// writing a program to compress a character array!!
#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char> chars){
    int idx = 0;
    int n = chars.size();

    for(int i = 0; i < n; i++){
        char tempChar = chars[i];
        int count = 0;

        while(i < n && chars[i] == tempChar){
            count++;
            i++;
        }

        if(count == 1){
            chars[idx++] = tempChar;
        }
        else{
            chars[idx++] = tempChar;
            string str = to_string(count);

            for(char dig: str){
                chars[idx++] = dig;
            }
        }
        i--;
    }

    chars.resize(idx);

    for(auto i: chars){
        cout << i << "\t";
    }
    cout << endl;
    cout << "Size of chars : " << chars.size() << endl;

    return 0;
}

int main(){
    
    vector <char> chars = {'a','a','b','b','b','c','c'};
    compress(chars);
    return 0;
}