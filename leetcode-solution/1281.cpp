// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

// Problem: 1281. Subtract the Product and Sum of Digits of an Integer
// Difficulty: Easy
// Approach: Extract each digit, add it to the sum, multiply it into the product, and return product - sum.
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>

using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;
        while(n > 0){
            sum += n%10;
            product *= n%10;
            n /= 10;
        }
        return product - sum;
    }
};