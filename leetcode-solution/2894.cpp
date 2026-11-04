// Problem: 2894. Divisible and Non-divisible Sums Difference
// Difficulty: Easy
// Link: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
//
// Approach: Iterate from 1 to n, adding numbers divisible by m to one sum
// and all other numbers to another sum, then return their difference.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0, num2 = 0;
        for(int i = 1; i <= n; i++) {
            if(i%m == 0){
                num2 += i;
            } else {
                num1 += i;
            }
        }
        return num1 - num2;
    }
};