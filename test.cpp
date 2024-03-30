#include<iostream>
using namespace std;

int bitwiseComplement(int n);
int main(){
    int n;
    cout << "Enter a Number to find its complement in decimal numbers!! ";
    cin >> n;
    bitwiseComplement(n);
    return 0;
}

int bitwiseComplement(int n){
    int count = 0;
    int digit;
    int arr[10];
    int i = 0;
    int binary[10];
    int original = n;

    if(n == 0){
        return 1;
    }
    
    while(n != 0){
        digit = n % 2;
        arr[i] = digit;  // Converting Decimal to Binary
        i++;
        n = n / 2;
    }

    int j;
    for(j = i-1; j >= 0 ; j--){
        binary[count] = arr[j];   // Reversing Binary Numbers
        count++;
    }

    // Complementing the Binary Number
    for(i = 0; i < count; i++){
        if(binary[i] == 0){
            binary[i] = 1; // Convertign 0's to 1's 
        }
        else if(binary[i] == 1){
            binary[i] = 0;  // converting 1's to 0's
        }
    }

    // Converting Binary to Decimal
    int weight = 1;
    int decimal = 0;
    for(int i = count-1; i >= 0; i--){
        decimal = decimal + (binary[i] * weight);
        weight = weight * 2;
    }

    return decimal;
}