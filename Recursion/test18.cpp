// writing a program to find the fibonnaci series using recursion!!
#include<iostream>
using namespace std;

void fibonacci(int n1, int n2, int range){
    if(range == 0){ 
        return;
    }

    cout << n1 << " ";
    fibonacci(n2,n1 + n2,range-1);
}

int main(){
    
    int n1 = 0;
    int n2 = 1;
    int range = 2;
    fibonacci(n1,n2,range);
    cout << endl;
    return 0;
}