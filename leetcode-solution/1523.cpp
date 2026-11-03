// Problem: 1523. Count Odd Numbers in an Interval Range
// Difficulty: Easy
// Link: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/
// Approach: Count odd numbers up to high and subtract odd numbers before low.
//
// Time Complexity: O(1)
// Space Complexity: O(1)

class Solution {
public:
    int countOdds(int low, int high) {
        return (high + 1) / 2 - (low / 2);
    }
};