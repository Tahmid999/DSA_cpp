/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] 
and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, 
excluding the space needed to store the output


Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:

Input: nums = [1,1,2]
Output: [1]
Example 3:

Input: nums = [1]
Output: []
 
Constraints
n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
Each element in nums appears once or twice.

*/

// TLE 

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        // finding duplicats
        for(int i =0; i< nums.size(); i++) {
            for(int j = 0; j< nums.size(); j++){
                if(i!=j && nums[i] == nums[j]){
                    ans.push_back(nums[j]);
                }
            }
        }

        // removing dubble duplicats
        for(int i = 0; i< ans.size(); i++){
            for(int j = 0; j< ans.size(); j++){
                if(i!=j && ans[i]==ans[j]){
                    vector<int>::iterator it;
                    it = ans.begin()+i;
                    ans.erase(it);
                }
            }
        }

        return ans;
    }
};


// best and optimized from discussion

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            int index = abs(nums[i]);
            if(nums[index-1]<0){
                ans.push_back(index);
            }

            nums[index-1] *= -1;
        }
        return ans;
    }
};