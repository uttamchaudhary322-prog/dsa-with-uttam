// Problem: 258. Add Digits
// Difficulty: Easy
// Link: https://leetcode.com/problems/add-digits/
//
// Approach: Repeatedly extract and add the digits until the number becomes a
// single digit.
//
// Time Complexity: O(log n)
// Space Complexity: O(1)


class Solution {
public:
    int addDigits(int num) {
        while(num > 9){
            int n = num;
            int sum = 0;
            while(n > 0){
                int rem = n%10;
                sum += rem;
                n /= 10;
            }
            num = sum;
        }
        return num;
    }
};