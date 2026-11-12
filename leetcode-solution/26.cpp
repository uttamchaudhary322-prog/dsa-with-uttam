// Problem: 26. Remove Duplicates from Sorted Array
// Difficulty: Easy
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//
// Approach: Keep a write index for the next distinct value.
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }

        int k = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};