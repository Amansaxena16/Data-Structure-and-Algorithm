// You have given a array consist of N elements and the task is to find all the distinct triplets present in an array which array up to given Number 'K'.
#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            for(int k = 0; k < 6; k++){
                if(arr[i] + arr[j] + arr[k] ==  12){
                    cout << "Triple Sum : " << arr[i] << "\t" << arr[j] << "\t" << arr[k] << endl;
                }
            }
        }
    }
}