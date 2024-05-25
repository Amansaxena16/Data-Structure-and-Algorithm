#include<iostream>
using namespace std;

int main(){
    int arr[7]= {5,2,1,6,8,3,10};

    for(int i = 0; i < 7; i++){
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--) {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
        }
    }

    cout << "Sorted Array : ";
    for(int i = 0; i < 7; i++){
        cout << arr[i] << "\t";
    }
    return 0;
}