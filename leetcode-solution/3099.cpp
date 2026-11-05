// Problem: 3099. Harshad Number
// Difficulty: Easy
// Link: https://leetcode.com/problems/harshad-number/
//
// Approach: Calculate the sum of the digits and check whether the number
// is divisible by that sum.
//
// Time Complexity: O(log x)
// Space Complexity: O(1)

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int y = x;
        while(y > 0){
            sum += y%10;
            y /= 10;
        }
        if(x%sum == 0){
            return sum;
        }else {
            return -1;
        }
    }
};