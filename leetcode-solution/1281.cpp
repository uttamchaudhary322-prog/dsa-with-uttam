// Problem: 1281. Subtract the Product and Sum of Digits of an Integer
// Difficulty: Easy
// Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
//
// Approach: Extract each digit, calculate the product and sum,
// then return their difference.
//
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;

        while (n > 0) {
            int digit = n % 10;

            sum += digit;
            product *= digit;

            n /= 10;
        }

        return product - sum;
    }
};