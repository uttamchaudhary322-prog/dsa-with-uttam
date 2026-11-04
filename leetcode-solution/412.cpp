// Problem: 412. Fizz Buzz
// Difficulty: Easy
// Link: https://leetcode.com/problems/fizz-buzz/description/
//
// Approach: Iterate from 1 to n and add "Fizz", "Buzz", "FizzBuzz", or the
// number as a string based on its divisibility by 3 and 5.
//
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i = 1; i <= n; i++) {
            if(i%3 == 0 && i%5 == 0) {
                ans.push_back("FizzBuzz");
            } else if(i%3 == 0){
                ans.push_back("Fizz");
            }else if(i%5 == 0) {
                ans.push_back("Buzz");
            }else {
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};