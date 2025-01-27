// writing a program to find the digit of a given array by adding One plus!!
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void plusOne(vector<int> digits){
    int n = digits.size();
    int num = 0;

    if(digits.size() == 1){
        
        num = digits[0] + 1;
        if(num == 10){
            digits[0] = 1;
            digits.push_back(0);
        }
        else{
            digits[0] = num;
        }
        
    }
    else{
        for(int i = n - 1; i >= 0; i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }
            else{
                digits[i] = digits[i] + 1;
                break;
            }

            if(i == 0){
                digits.insert(digits.begin(), 1);
            }
        }
    }

    // printing the vector
    for(int digit: digits){
        cout << digit << "\t";
    }
    cout << endl;
}

int main(){
    
    vector<int> digits = {0};
    plusOne(digits);
    return 0;
}