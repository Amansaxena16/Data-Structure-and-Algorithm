#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    
    // declaring the unordered map that stores strings as key and value as pair
    unordered_map<string, int> ageMap;

    ageMap["aman"] = 22;
    ageMap["shruti"] = 20;
    ageMap["goldi"] = 26;

    cout << "shruti age is : " << ageMap["shruti"] << endl;
    cout << "aman age is : " << ageMap["aman"] << endl;
    cout << "goldi age is : " << ageMap["goldi"] << endl;

    return 0;
}