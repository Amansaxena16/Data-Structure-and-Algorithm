#include<iostream>
using namespace std;

void pivotInteger(int n){
    if(n == 1){
        cout << "Pivot Integer : 1" << endl;
    }
    int move = 1;

    // This array is used to insert the values into the array
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = i+1;
    }

    while(true){
        int first_equal = 0;
        int sec_equal = 0;
        // First Loop .... 
        for(int i = 0; i <= move; i++){
        first_equal = first_equal + arr[i];
        }

        // Second Loop ... 
        for(int i = move; i <= n; i++){
            sec_equal = sec_equal + arr[i];
        }

        // Condition Checking
        if(first_equal == sec_equal){
            cout << "Pivot Integer : " << arr[move] << endl;
            break;
        }
        move++;
    }
    cout << "No Pivot Integer";
}

int main(){
    int n;
    cout << "Enter the Length of the Array : ";
    cin >> n;
    pivotInteger(n);

}