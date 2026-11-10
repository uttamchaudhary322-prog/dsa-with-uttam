// Problem: 1672. Richest Customer Wealth
// Difficulty: Easy
// Link: https://leetcode.com/problems/richest-customer-wealth/
//
// Approach: Calculate each customer's total wealth and keep track of the maximum.
// Time Complexity: O(n * m)
// Space Complexity: O(1)

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rich = 0;
        for (auto& i : accounts) {
            int sum = 0;
            for (int money : i) {
                sum += money;
            }
            rich = max(rich, sum);
        }
        return rich;
    }
};