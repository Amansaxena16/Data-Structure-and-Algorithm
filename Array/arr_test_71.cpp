// writing a program to find the container size in whlich most water can be stored!!
#include<iostream>
using namespace std;

void maxArea(int arr[], int height){
    int left = 0;
    int right = height - 1;
    int mostWater = 0;

    while(left < right){

        int w = right - left;
        int h = min(arr[left],arr[right]); 
        int container = w * h;

        if(container > mostWater){
            mostWater = container;
        }
        if(left < right){
            left++;
        }
        else{
            right--;
        }
    }

    // Most water can be store 
    cout << "Most water can be store is : " << mostWater << endl;
}

int main(){
    
    int arr[2] = {1,1};
    maxArea(arr,2);
    return 0;
}