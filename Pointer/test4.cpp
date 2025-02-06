#include<iostream>
using namespace std;

void increaseOne(int *ptr){
    *ptr = *ptr + 1;
}

int main(){
    
    int a = 5;
    increaseOne(&a);
    cout << a << endl;
    return 0;
}