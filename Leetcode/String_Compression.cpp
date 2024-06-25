// writing a program to find the repreated characters in a string and returning in array!!
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int stringcompress(char chars[], int len){
    int apha[26] = {0};
    for(int i = 0; i < len; i++){
        int index = chars[i] - 'a';
        apha[index]++;
    }

    char temp[len];
    int y = 0;
    for(int i = 0; i < 26; i++){
        char aphabet = i + 'a';
        int count = apha[i];

        if(count >= 1){
            temp[y] = aphabet;
            y++;
            if(count > 9){
                int first_break = count / 10;
                int second_break = count % 10;

                temp[y] = '0' + first_break;
                y++;

                temp[y] = '0' + second_break;
                y++;
            }
            else{
                temp[y] = '0' + count;
                y++;
            }
        }
        else if(count == 0){
            continue;
        }
    }

    temp[y] = '\0';

    // Printing the temp char array!!
    cout << "temp : " ;
    for(int i = 0; temp[i] != '\0'; i++){
        cout << temp[i] << "\t";
    }

    int temp_len = strlen(temp);
    cout << endl;
    cout << "temp len : " << temp_len;
}

int main(){
    int len = 35;
    char chars[len] = {'a','a','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','c','c','c'};

    stringcompress(chars,len); 
    return 0;
}