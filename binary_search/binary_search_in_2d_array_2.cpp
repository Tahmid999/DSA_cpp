#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // finding row, col
        int row = matrix.size();
        int col = matrix[0].size();

        // finding search space
        int start_rowindex = 0;
        int end_colindex = col -1;

        while(start_rowindex < row && end_colindex>=0)
        {
            int element = matrix[start_rowindex][end_colindex];

            if(element == target)
            {
                return 1;
            }
            if(element < target)
            {
                start_rowindex++;
            }
            else
            {
                end_colindex--;
            }
        }

        return 0;
    }
};

int main() {


    return 0;
}