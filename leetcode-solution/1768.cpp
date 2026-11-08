// Problem: 1768. Merge Strings Alternately
// Difficulty: Easy
// Link: https://leetcode.com/problems/merge-strings-alternately/
//
// Approach: Add one character from each string while either string has characters left.
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = 0;
        int n2 = 0;
        string ans = "";

        while(n1 < word1.length() || n2 < word2.length()){
            if(n1 < word1.length()){
                ans += word1[n1++];
            }
            if(n2< word2.length()){
                ans += word2[n2++];
            }
        }
        return ans;
    }
};