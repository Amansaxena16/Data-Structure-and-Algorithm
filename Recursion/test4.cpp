#include<iostream>
using namespace std;

// 0 1 1 2 3 5 8 13

int Fibonacci(int n, int a, int b){
    if(n == 0){
        return 1;
    }
    else{
        int c = a + b;
        cout << c << endl;
        a = b;
        b = c;
        Fibonacci(n-1,a,b);
    }
}

int main(){
    int a = 0;
    int b = 1;
    int n;
    cout << "How many number you want : ";
    cin >> n;
    cout << a << endl;
    cout << b << endl;
    Fibonacci(n,a,b);
    return 0;
}