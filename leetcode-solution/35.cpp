// Problem: 35. Search Insert Position
// Difficulty: Easy
// Link: https://leetcode.com/problems/search-insert-position/
//
// Approach: Use binary search to find the first position whose value is
// greater than or equal to the target.
//
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return left;
    }
};