// Problem: 1356. Sort Integers by The Number of 1 Bits
// Difficulty: Easy
// Link: https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
//
// Approach: Sort the numbers by their number of set bits, using the number
// itself as the tie-breaker when two numbers have the same count.
//
// Time Complexity: O(n log n)
// Space Complexity: O(log n)


class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int a, int b) {
            int countA = __builtin_popcount(a);
            int countB = __builtin_popcount(b);
            return countA != countB ? countA < countB : a < b;
        });
        return arr;
    }
};