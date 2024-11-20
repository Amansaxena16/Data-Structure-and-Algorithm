// writing a program to find the element using binary search
#include<iostream>
using namespace std;

void findElement(int arr[], int n, int target){
    int low = 0;
    int high = n - 1;


    while(low <= high){
        int mid = (low + high) / 2;
        
        if(arr[mid] == target){
            cout << "Element is present!!" << endl;
            break;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
}

int main(){
    
    int arr[7] = {1,5,7,10,17,19,31};
    findElement(arr,7, 19);
    return 0;
}