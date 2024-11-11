#include<iostream>
#include<algorithm>
using namespace std;

// void merge(int arr1[], int n, int arr2[], int m){
//     int size = n + m;
//     int arr3[size];
//     int left = 0;
//     int right = 0;
//     int i = 0;

//     while(left < n && right < m){
//         if(arr1[left] < arr2[right]){
//             arr3[i] = arr1[left];
//             left++;
//             i++;
//         }
//         else{
//             arr3[i] = arr2[right];
//             right++;
//             i++; 
//         }
//     }

//     // Inserting Left over values of arr1 into arr[3]
//     while(left < n){
//         arr3[i] = arr1[left];
//         left++;
//         i++;
//     }

//     // Inserting Left over values of arr2 into arr3
//     while(right < m){
//         arr3[i] = arr2[right];
//         right++;
//         i++;
//     }

//     // Inserting the values into arr1 and arr2
//     for(int i = 0; i < size; i++){
//         if(i < n){
//             arr1[i] = arr3[i];
//         }
//         else{
//             arr2[i - n] = arr3[i];
//         }
//     }

//     // printing the both the loops
//     for(int i = 0; i < n; i++){
//         cout << arr1[i] << " "; 
//     }
//     cout << endl;
//     for(int j = 0; j < m; j++){
//         cout << arr2[j] << " ";
//     }
//     cout << endl;
// }

void merge(int arr1[], int n, int arr2[], int m){
    int last = n - 1;
    int first = 0;

    while(last >= 0 && first < m){
        if(arr1[last] > arr2[first]){
            swap(arr1[last],arr2[first]);
            last--;
            first++;
        }
        else{
            break;
        }
    }

    // sorting both the arrays
    sort(arr1,arr1 + n);
    sort(arr2,arr2 + m);


    // printing the both the loops
    for(int i = 0; i < n; i++){
        cout << arr1[i] << " "; 
    }
    cout << endl; 
    for(int j = 0; j < m; j++){
        cout << arr2[j] << " "; 
    }
    cout << endl;

}

int main(){
    
    int arr1[4] = {0,1,2,5};
    int arr2[5] = {2,4,5,7,9};
    merge(arr1,4,arr2,5);
    return 0;
}