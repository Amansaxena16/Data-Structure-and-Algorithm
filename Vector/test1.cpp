// writting a program to create a vector!!
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << "size = " << v.size() << endl;
    cout << "capacity = " << v.capacity() << endl;

    cout << "Element at 2nd index is :" << v.at(2) << endl;

    cout << "Front Element : " << v.front() << endl;
    cout << "Last Element : " << v.back() << endl;

    cout << "Printing all the element in the vector : ";
    for(int i:v){
        cout << i << "\t";
    }
    
}