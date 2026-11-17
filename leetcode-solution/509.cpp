// Problem: 509. Fibonacci Number
// Difficulty: Easy
// Link: https://leetcode.com/problems/fibonacci-number/
//
// Approach: Build the Fibonacci sequence iteratively while keeping only the
// previous two values.
//
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    int fib(int n) {
        if(n <= 1) return n;
        int a = 0, b = 1;
        for(int i = 2; i <= n; i++){
            int temp = b;
            b = b + a;
            a = temp;
        }
        return b;
    }
};