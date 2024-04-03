#include<iostream>
using namespace std;

bool isPowerOfTwo(int n);
int main(){
    int n;
    cout << "Enter a Number to Check whether it is power of Two or Not!! ";
    cin >> n;
    int r = isPowerOfTwo(n);
    cout << r << endl;
}

bool isPowerOfTwo(int n){
    if(n == 1){
        return true;
    }
    int power = 1;
    while(power != n && power < n){

        power = power * 2;
        cout << "power = " << power << endl;

        if(power == n){
            return true;
        }
        
    }
    return false;
}