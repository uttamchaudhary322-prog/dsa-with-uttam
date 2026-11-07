// Problem: 1929. Concatenation of Array
// Difficulty: Easy
// Link: https://leetcode.com/problems/concatenation-of-array/
//
// Approach: Create a result array of twice the input size and copy the input
// into both halves.
//
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2*nums.size(), 0);
        for(int i = 0; i < nums.size(); i++){
            ans[i] = nums[i];
            ans[i + nums.size()] = nums[i];
        }
        return ans;
    }
};