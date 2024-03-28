// Subtract the Product and Sum of Digit of an Integer!!
#include<iostream>
using namespace std;

int subtractProductAndSum(int n);

int main(){
    int n ;
    cout << "Enter a Number!! ";
    cin >> n;
    int p = subtractProductAndSum(n);
    cout << "Result " << p;

}

int subtractProductAndSum(int n){
    int product = 1;
    int sum = 0;
    while(n != 0){
        int temp = n % 10;
         product = product * temp;
         sum = sum + temp;
         n = n / 10;
    }
    int Subtract = product - sum;
    return Subtract;

}

