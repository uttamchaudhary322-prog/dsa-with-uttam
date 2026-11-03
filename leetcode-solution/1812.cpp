// Problem: 1812. Determine Color of a Chessboard Square
// Difficulty: Easy
// Link: https://leetcode.com/problems/determine-color-of-a-chessboard-square/description/
// Approach: Use the parity of the file and rank; an odd sum represents a white square.
//
// Time Complexity: O(1)
// Space Complexity: O(1)


class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return (coordinates[0] + coordinates[1]) % 2 != 0;
    }
};