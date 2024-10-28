// writing a program to find the permutation number form an array!!
#include<iostream>
using namespace std;

void nextPermutation(int arr[], int n){
    int p = 0;
    int q = n - 1;

    // find the dip of the array
    int index = -1;
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] < arr[i + 1]){
            index = i;
            break;
        }
    }

    // if index value is -1 we will reverse the array, the value will be the answer
    if(index == -1){
        p = 0;
        q = n - 1;
        while(p < q){
            swap(arr[p],arr[q]);
            p++;
            q--;
        }

        // printing the array
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else{
        // find the exact larger number from the index value from the array 
        for(int i  = n - 1; i >  index; i--){
            if(arr[i] > arr[index]){
                swap(arr[i], arr[index]);
                break;
            }
        }
        
        // reversing / sort rest values which are left after the index values in the array
        p = index + 1;
        q = n -1;
        while(p < q){
            swap(arr[p], arr[q]);
            p++;
            q--;
        }
        // printing the array 
        for(int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
        cout << endl;
    }

}

int main(){
    
    int arr[3] = {1,1,5};
    nextPermutation(arr,3);
    return 0;
}