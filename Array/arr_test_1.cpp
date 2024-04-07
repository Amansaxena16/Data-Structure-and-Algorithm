// writting a program to swapping all the number in a array!!
#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,3,5,7,8};

    for(int i = 0; i < 5; i+=2){
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }

    cout << "Swapped arrray = ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << '\t';
    }
}