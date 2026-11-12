// Problem: 283. Move Zeroes
// Difficulty: Easy
// Link: https://leetcode.com/problems/move-zeroes/
//
// Approach: Move non-zero values forward, then fill the remaining positions with zeroes.
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroINdex = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[nonZeroINdex++] = nums[i];
            }
        }

        for(int i = nonZeroINdex; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};