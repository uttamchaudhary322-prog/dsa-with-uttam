// Problem: 344. Reverse String
// Difficulty: Easy
// Link: https://leetcode.com/problems/reverse-string/
//
// Approach: Swap characters from both ends while moving toward the center.
// Time Complexity: O(n)
// Space Complexity: O(1)

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0, end = s.size() - 1;
        while(st <= end){
            swap(s[st++], s[end--]);
        }
    }
};