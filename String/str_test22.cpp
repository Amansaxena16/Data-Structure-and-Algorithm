// writing a program to find the string is anagram or not!!  
#include<iostream>
#include<cstring>
using namespace std;

int findAnagram(char str1[], char str2[]){

    int n = 26;
    // Initializing two arrays
    int arr1[n] = {0}; 
    int arr2[n] = {0};

    // Length of both of the string
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // If length of both string don't match it will return 0
    if(len1 != len2){
        return 0;
    }

    // we will initialized the char value into the array
    else{
        // Loop For string 1
        for(int i = 0; str1[i] != '\0'; i++){
            int index = str1[i] - 'a';
            arr1[index] = arr1[index] + 1;
        }

        // Loop For String 2
        for(int i = 0; str2[i] != '\0'; i++){
            int index = str2[i] - 'a';
            arr2[index] = arr2[index] + 1;
        }
    }

    // Checking the values are similar or not
    for(int i = 0; i < n; i++){
        if(arr1[i] != arr2[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    
    char str1[10];
    char str2[10];

    cout << "Enter a string to find it is Anagram or not : ";
    cin >> str1;

    cout << "Enter Another : ";
    cin >> str2;

    if(findAnagram(str1, str2)){
        cout << "The input strings is Anagram!!";
    }
    else{
        cout << "The input strings is not Anagram!!";
    }
    return 0;
}