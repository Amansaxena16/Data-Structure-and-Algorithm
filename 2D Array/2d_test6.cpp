// writing a program to find the sum of rows in the array!!
#include<iostream>
using namespace std;

void findSum(int arr[][3], int n, int m){
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = 0; j < m; j++){
            sum = sum  + arr[i][j];
        }
        cout << "sum of " << i + 1 << "row is : " << sum << endl;
    }
}

int main(){ 
    
    int arr[3][3] = {{1,11,111},{2,22,222},{3,33,333}};
    findSum(arr,3,3);
    return 0;
} 