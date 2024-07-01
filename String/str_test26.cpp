#include<iostream>
#include<string>
using namespace std;

int findWordsContaining(string str[], int len, char target){

    int ans[len];
    int index = 0;
    for(int i = 0; i < len; i++){
        for(int j = 0; str[i][j] != '\0'; j++){
            if(str[i][j] == target){
                ans[index] = i;
                index++;
                break;
            }
        }
    }

    return ans;
}

int main(){
    
    string str[] = {"hello","animation","academcy","kunpur","glbajaj","checklist"};

    char target;
    cout << "Enter a Character you want to find : ";
    cin >> target;

    int len = sizeof(str) / sizeof(str[0]);
    findWordsContaining(str,len,target);
    
    return 0;
}