// Problem: 704. Binary Search
// Difficulty: Easy
// Link: https://leetcode.com/problems/binary-search/
//
// Approach: Repeatedly compare the target with the middle element and
// discard the half that cannot contain the target.
//
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                return mid;
            } else if (nums[mid] > target)
            {
                end = mid - 1;
            }else{
                st = mid + 1;
            }
            
        }
        return -1;
    }
};