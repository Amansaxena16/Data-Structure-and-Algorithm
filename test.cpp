#include<iostream>
using namespace std;


int main() {
    int arr[6] = {3,2,1,2,2,3};

    for(int i = 0; i < 6; i++){
        for(int j = i+1; j < 6; j++){   // Making the Array in Increasing Order
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
        }
    }
    }

    for(int i = 0; i < 6; i++){
        cout << arr[i] << "\t" << endl;
    }
    return 0;
}
