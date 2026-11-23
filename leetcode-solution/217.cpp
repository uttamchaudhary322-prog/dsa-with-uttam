// Problem: 217. Contains Duplicate
// Difficulty: Easy
// Link: https://leetcode.com/problems/contains-duplicate/
//
// Approach: Track each number in a hash map and return true when a number
// is encountered more than once.
//
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;
        for (int num : nums) {
            if (seen[num] >= 1)
                return true;
            seen[num]++;
        }
        return false;
    }
};