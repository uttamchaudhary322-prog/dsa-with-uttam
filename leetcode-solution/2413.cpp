// Problem: 2413. Smallest Even Multiple
// Difficulty: Easy
// Link: https://leetcode.com/problems/smallest-even-multiple/
//
// Approach: If n is even, return n.
// Otherwise, return 2 * n.
//
// Time Complexity: O(1)
// Space Complexity: O(1)

class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n % 2 == 0) ? n : 2 * n;
    }
};