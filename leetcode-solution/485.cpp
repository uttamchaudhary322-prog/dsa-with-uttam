// Problem: 485. Max Consecutive Ones
// Difficulty: Easy
// Link: https://leetcode.com/problems/max-consecutive-ones/
//
// Approach: Count consecutive ones and reset the current count when a zero
// is encountered, keeping the maximum count seen so far.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int update = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                update++;
            }else {
                ans = max(ans, update);
                update = 0;
            }
            ans = max(ans, update);
        }
        return ans;
    }
};