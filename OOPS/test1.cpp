// writing a program using OOPs concepts just for test!!
#include<iostream>
using namespace std;

class Hero{
    
    // Properties
    char name[10] = "paul";
    public:int level = 1;
};

int main(){

    // Object of the class
    Hero paul;
    int level = paul.level;
    cout << "Level of the Hero is  : " << level;
    return 0;
}