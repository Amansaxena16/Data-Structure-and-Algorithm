// writing a program to find a number is armstrong number or not!!
#include<iostream>
using namespace std;

int findCube(int n){
    int cube = 0;

    while(n != 0){
        int num = n % 10;
        num = num * num * num;
        cube = cube + num;
        n = n / 10;
    }

    return cube;
}

bool findArmstrong(int n){
    int cube = findCube(n);

    if(cube == n){
        return true;
    }

    return false;
}

int main(){
     
    int n = 153;
    cout << findArmstrong(n) << endl;
    return 0;
}