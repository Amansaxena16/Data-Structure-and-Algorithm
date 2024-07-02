// Writing a program to find the minimum operation to make all the element divisible by three!!
#include <iostream>
#include <vector>
using namespace std;


int minimumOperations(vector<int>& nums) {
    int count = 0;
    int len = nums.size();
    for (int i = 0; i < len; i++) {
        if ((nums[i] + 1) % 3 == 0) {
            count++;
        }
        if ((nums[i] - 1) % 3 == 0) {
            count++;
        }
    }
    return count;
}


int main() {
    vector<int> nums = {1, 2, 3, 4};
    int result = solution.minimumOperations(nums);
    cout << "Minimum operations: " << result << endl;
    return 0;
}
