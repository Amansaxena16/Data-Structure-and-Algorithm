// writing a program to find the maximum occuring character in a inpur string!!
#include<iostream>
using namespace std;

char FindDuplicate(string str){
    int apha[25] = {0};
    int index = 0;

    for(int i = 0; str[i] != '\0'; i++){
        index = str[i] - 'a';
        apha[index] = apha[index] + 1;
    }

    int value = 0;
    int max_index = 0;
    for(int i = 0; i < 25; i++){
        if(apha[i] > value){
            value = apha[i];
             max_index = i;
        }
    }

    if(max_index <= 2){
        return 0;
    }

    char character = max_index + 'a';
    return character;
}

int main(){
    
    string str;
    cout << "Enter a String : ";
    cin >> str;

    char dupli_char =  FindDuplicate(str);

    if(dupli_char >= 'a' && dupli_char <= 'z'){
        cout << "Duplicate Character : " << dupli_char;
    }
    else{
        cout << "No Duplicate Character!!";
    }
    return 0;
}