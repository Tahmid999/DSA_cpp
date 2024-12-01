/*
Given an m x n matrix, return all elements of the matrix in spiral order.


Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        //finding number of row, col, element of matrix vector
        int row = matrix.size();
        int col = matrix[0].size();
        int num_of_ele = row * col;
        int count = 0;

        //initialising path for traveling row and col;
        int start_row = 0;
        int end_col = col-1;
        int end_row = row-1;
        int start_col = 0;

        while(count < num_of_ele)
        {
            // start row
            for(int index= start_row; count < num_of_ele && index<=end_col; index++)
            {
                ans.push_back(matrix[start_row][index]);
                count++;
            }
            start_row++;

            // end col
            for(int index = start_row; count < num_of_ele && index<=end_row; index++)
            {
                ans.push_back(matrix[index][end_col]);
                count++;
            }
            end_col--;

            // end row
            for(int index = end_col; count < num_of_ele && index >= start_col; index--)
            {
                ans.push_back(matrix[end_row][index]);
                count++;
            }
            end_row--;

            // start col
            for(int index = end_row; count < num_of_ele && index>=start_row; index--)
            {
                ans.push_back(matrix[index][start_col]);
                count++;
            }
            start_col++;
        }

        return ans;
    }
};

int main() {


    return 0;
}