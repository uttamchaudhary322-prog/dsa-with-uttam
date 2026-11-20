// Problem: 1295. Find Numbers with Even Number of Digits
// Difficulty: Easy
// Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
//
// Approach: Count the digits in each number and increment the answer when
// the count is even.
//
// Time Complexity: O(n * log m), where m is the largest number
// Space Complexity: O(1)

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for (auto x : nums) {
            int digits = 0;
            while (x > 0) {
                digits++;
                x /= 10;
            }
            if (!(digits & 1)) {
                ans++;
            }
        }
        return ans;
    }
};