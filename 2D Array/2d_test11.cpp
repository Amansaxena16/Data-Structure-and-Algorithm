// writing a program to find the element in an 2d array!!
#include<iostream>
using namespace std;

void findElement(int arr[][3], int row , int col, int target){
       int low = 0;
       int high = row * col - 1;

       while(low <= high){
        int mid = (low + high) / 2;
        int n = mid / col;
        int m = mid % col;

        if(arr[n][m] == target){
            cout << "Element is present in the scope!!" << endl;
            break;
        } 
        else if(arr[n][m] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1; 
        }
       }
    }

int main(){
    
    int arr[3][3] = {{1,2,3},{11,12,13},{21,22,23}};
    int target = 1;
    findElement(arr,3,3,target);
    return 0;
}