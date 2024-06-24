// writing a program to find the repreated characters in a string and returning in array!!
#include<iostream>
#include<string>
using namespace std;

int stringcompress(char chars[], int len){
    int apha[25] = {0};
    for(int i = 0; i < len; i++){
        int index = chars[i] - 'a';
        apha[index]++;
    }

    string temp;
    for(int i = 0; i < 25; i++){
        char aphabet = i + 'a';
        int count = apha[i];

        if(count > 1){
            temp += aphabet;
            temp += to_string(count);
        }
        else if(count == 0){
            continue;
        }
        else if(count == 1){
            temp += aphabet;
        }
    }

    int temp_len = temp.length();
    cout << "string : " << temp << endl;
    cout << temp_len << endl;
}

int main(){
    
    char chars[7] = {'a','a','b','b','c','c','c'};

    stringcompress(chars,7);
    return 0;
}