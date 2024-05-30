// writing a program which will rotate the array in cyclic order by K times!!
#include<iostream>
using namespace std;

int main(){
    int n = 6;
    int nums[n] = {1,7,9,11,32,2};
    int k = 2;

    // for(int i = 0; i < k; i++){

    //     int temp = arr[n-1];
    //     for(int j = n-1; j > 0; j--){
    //         arr[j] = arr[j-1];
    //     }
    //     arr[0]= temp;
    // }

    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << "\t";
    // }


    int arr[k];

    // int count = n-k;
    // for(int i = 0; i < k; i++){
    //     arr[i] = nums[count];
    //     count++;
    // }
    for(int i = 0; i < n; i++){
        arr[(i+k)%n] = nums[i];
    }
    for(int i = n; i >= k; i--){
        nums[i] = nums[i-k];
    }
    // copy values
    for(int i = 0; i < k; i++){
        nums[i] = arr[i];
    }

    // printing
    for(int i = 0; i < n; i++){
        cout << nums[i] << "\t";
    }

    return 0;
}
