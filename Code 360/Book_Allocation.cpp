// writing a program to to allocate the books page to every student using binary search!!
#include<iostream>
using namespace std;

bool isPossibleSol(vector<int>& arr, int mid, int m, int n){
    int student = 1;
    int pageSum = 0;

    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum = pageSum + arr[i];
        }
        else{
            student++;
            if(student > m || arr[i] > mid){
                return false;
            }
            else{
                pageSum = arr[i]''
            }
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m,){
    int start = 0;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    int end = sum;

    while(start <= end){
        mid = start + ((end - start) / 2);
        int ans = 0;

        if(isPossibleSol(arr,mid,m,n) == true){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

    }
    return ans;
}

int main(){
    int n = 4;
    int arr[n] = {10,20,30,40};
    
    int student = 2;
    findPages(arr, n,student);

    

}