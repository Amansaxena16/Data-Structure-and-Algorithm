#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};

    for(int i = 0; i < 6; i++){
        if(arr[i] + arr[i++] + arr[i=i+2] ==  12){
            cout << "Triple Sum : " << arr[i] << "\t" << arr[i++] << arr[i=i+2] << endl;
        }
    }
}