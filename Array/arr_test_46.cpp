// writing a program to find the majority of element in the array which is ( > n/3 times)
#include<iostream>
#include <limits.h>
using namespace std;

void findMajority(int arr[], int n){
    int element1 = INT_MIN;
    int count1 = 0;

    int element2 = INT_MIN;
    int count2 = 0;

    for(int i = 0; i < n; i++){

        if(arr[i] == element1){
            count1++;
        }
        else if(arr[i] == element2){
            count2++;
        }
        else if(count1 == 0 && arr[i] != element2){
            element1 = arr[i];
            count1 = 1;
        }
        else if(count2 == 0 && arr[i] != element1){
            element2 = arr[i];
            count2 = 1;
        }
        else{
            count1--;
            count2--;
        }
    }

    count1 = 0;
    count2 = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == element1){
            count1++;
        }
        if(arr[i] == element2){
            count2++;
        }
    }

    if(count1 >= (n / 3) + 1 && count2 >= (n / 3) + 1){
        cout << "Elements are : " << element1 << " " << element2 << endl;
    }
    if(count1 >= (n / 3) + 1){
        cout << "Elements are : " << element1 << endl;
    }
    if(count2 >= (n / 3) + 1){
        cout << "Elements are : " << element2 << endl;
    }

}

int main(){
    
    int arr[3] = {3,2,3};
    findMajority(arr,3);
    return 0;
}