// writing a program to using pointer!!
#include<iostream>
using namespace std;

void update(int *a){
    *a = *a + 1;
}

int main(){
    
    int a = 7;
    update(&a);
    cout << "value is : " << a << endl;
    return 0;
}