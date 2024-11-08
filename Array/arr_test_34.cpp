// writing a program to merge two sorted arrays into one array!!
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> num1, vector<int> num2){

    for(int i = 0; i < num2.size(); i++){
        num1.push_back(num2[i]);
    }
    // sorting the vector
    sort(num1.begin(), num1.end());

    // printing the array
    for(int i = 0; i < num1.size(); i++){
        cout << num1[i] << " ";
    } 
    cout << endl;
} 

int main(){
    
    vector<int> num1{1,3,5,7};
    vector<int> num2{0,2,6,8,9};
    merge(num1,num2);
    return 0;
}