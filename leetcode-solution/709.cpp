// Problem: 709. To Lower Case
// Difficulty: Easy
// Link: https://leetcode.com/problems/to-lower-case/
//
// Approach: Convert each character to lowercase and append it to the result.
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    string toLowerCase(string s) {
        string lower = "";
        for(char ch : s){
            lower += tolower(ch);
        }
        return lower;
    }
};