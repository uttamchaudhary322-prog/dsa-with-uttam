// Problem: 1342. Number of Steps to Reduce a Number to Zero
// Difficulty: Easy
// Link: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/description/
//
// Approach: Repeatedly divide even numbers by 2 and subtract 1 from odd
// numbers until the number becomes zero, counting each operation.
//
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int numberOfSteps(int num) {
        if(num == 0) return 0;
        int ans = 0;
        while(num > 0) {
            ans++;
            if(num%2 == 0){
                num /= 2;
            }else{
                num -= 1;
            }
        }
        return ans;
    }
};