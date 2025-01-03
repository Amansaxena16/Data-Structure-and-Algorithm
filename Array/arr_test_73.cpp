// Jump Game !!
#include<iostream>
using namespace std;

bool canJump(int arr[], int n){
    int jump = 1;
    int i = 0;

    while(i <= n){
        int nextJump = arr[jump + i];
        i = jump + i;

        if(nextJump < n){
            nextJump = nextJump + i;

            if(nextJump == n){
                return true;
            }
        }
        else if(nextJump > n){
            return false;
        }
    }

    return true;
}

int main(){
    
    int arr[5] = {2,3,1,1,4};
    if(canJump(arr,5)){
        cout << "True;"  << endl;
    }
    else{
        cout << "False" << endl;
    }

    return 0;
}