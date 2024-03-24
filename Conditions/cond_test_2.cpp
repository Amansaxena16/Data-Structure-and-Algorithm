// writting a code which wil tell that it is a smaller cose or upper case letter or a number!!
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a Character or a value to find out what it is!! "; 
    cin >> ch;

    if(ch >= 65 && ch <= 90){
        cout << "This is Uppercase!! ";
    }
    else if(ch >= 97 && ch <= 122){
        cout << "This is Lowercase";
    }
    else{
        cout << "This is a Numeric";
    }

    return 0;
}