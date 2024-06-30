/*
writing a program to print the 2d array in spiral form 
leetcode - 54
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;

        // Index initialized
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        while (count < total) {

            // printing starting row
            for (int i = startingCol; count < total && i <= endingCol; i++) {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // printing ending col
            for (int i = startingRow; count < total && i <= endingRow; i++) {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // printing ending row
            for (int i = endingCol; count < total && i >= startingCol; i--) {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            // printing starting col
            for (int i = endingRow; count < total && i >= startingRow; i--) {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = sol.spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
