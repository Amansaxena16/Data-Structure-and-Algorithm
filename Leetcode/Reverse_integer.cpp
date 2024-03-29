#include<iostream>
using namespace std;

int reverse(int x);

int main(){
    int x;
    cout << "Enter a Number and it will reverse it!! ";
    cin >> x;
    int r = reverse(x);
    cout << "Reverse Number is  : " << r;
}
int reverse(int x){
    int ans = 0;
    while(x != 0){
        int digit = x % 10;
        if((ans < -2,147,483,647 /10) || (ans > 2,147,483,647/10)){
            return 0;
        }
        ans = ans * 10 + digit;
        x = x / 10;
    }

    return ans;
}