// Problem: 58. Length of Last Word
// Difficulty: Easy
// Link: https://leetcode.com/problems/length-of-last-word/
//
// Approach: Start from the end, skip trailing spaces, then count the last word.
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int ans = 0;
        while (i >= 0 && s[i] == ' '){
            i--;
        }

        while(i >= 0 && s[i] != ' '){
            ans++;
            i--;
        }
       
        return ans;
        
    }
};