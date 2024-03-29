#include<iostream>
using namespace std;

int bitwiseComplement(int n);
int main(){
    int n;
    cout << "Enter a Number to find its complement in decimal numbers!! ";
    cin >> n;
    bitwiseComplement(n);
}
int bitwiseComplement(int n){
    int count = 0;
    int digit;
    int arr[10];
    int i = 0;
    int binary[10];
    int original = n;

    while(n != 0){
        digit = n % 2;
        arr[i] = digit;
        i++;
        n = n / 2;
    }

    int j;
    for(j = i-1; j >= 0 ; j--){
        binary[count] = arr[j];   // Reversing Binary Numbers
        count++;
    }

    cout << "Binary Number of " << original << " is ";
    for(int k = 0; k < count; k++){
        cout << binary[k]; // Printing the Binary Numbers
    }

    cout << endl;

    // Complementing the Binary Number
    for(i = 0; i < count; i++){
        if(binary[i] == 0){
            binary[i] = 1; // Convertign 0's to 1's 
        }
        else if(binary[i] == 1){
            binary[i] = 0;  // converting 1's to 0's
        }
    }

    cout << "Complement of " << original << " is ";
    for(int k = 0; k < count; k++){
        cout << binary[k]; // Printing the Binary Numbers
    }
    return 0;
}