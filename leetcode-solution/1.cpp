// Problem: 1. Two Sum
// Difficulty: Easy
// Link: https://leetcode.com/problems/two-sum/
//
// Approach: Store each number's index in a hash map, then look up the
// complement needed to reach the target for every number.
//
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            numMap[nums[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            int c = target - nums[i];
            if (numMap.count(c) && numMap[c] != i) {
                return {i, numMap[c]};
            }
        }

        return {};
    }
};