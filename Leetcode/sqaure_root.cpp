// writing a program to find the square root of a number using binary search
#include<iostream>
using namespace std;

int mySqrt(int x){
    int start = 0;
    int end = x;
    long long int ans = 0;

    while(start <= end){
        long long int mid = start + ((end - start) / 2);
        long long int sqaure = mid * mid;

        if(sqaure == x){
            return mid;
        }
        else if(sqaure > x){
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int x;
    cout << "Enter a number to find its root sqaure : ";
    cin >> x;
    cout << "Square Root of " << x << " is " << mySqrt(x);
}