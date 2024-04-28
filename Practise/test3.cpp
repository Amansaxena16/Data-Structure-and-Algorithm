// Writting a program to find a largest number in an array!!
#include<iostream>
using namespace std;

int main(){
   
    int arr[6] = {10,50,200,30,60,90};
    int max = 0;
    for(int i = 0; i < 6; i++){
        if(max <= arr[i]){
            max = arr[i];
        }
    }

    cout << "Largest Value in an Array : " << max;

}