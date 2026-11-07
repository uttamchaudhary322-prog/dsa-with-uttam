// Problem: 1480. Running Sum of 1d Array
// Difficulty: Easy
// Link: https://leetcode.com/problems/running-sum-of-1d-array/
//
// Approach: Keep a running total and append it to the result after
// processing each element.
//
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};