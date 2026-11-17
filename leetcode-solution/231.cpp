// Problem: 231. Power of Two
// Difficulty: Easy
// Link: https://leetcode.com/problems/power-of-two/
//
// Approach: Repeatedly divide the number by 2 while it is even. The number
// is a power of two if the remaining value is 1.
//
// Time Complexity: O(log n)
// Space Complexity: O(1)


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        while(n%2 == 0){
            n /= 2;
        }
        return n == 1;
    }
};