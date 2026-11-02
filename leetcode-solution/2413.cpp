// https://leetcode.com/problems/smallest-even-multiple/description/

// Problem: 2413. Smallest Even Multiple
// Difficulty: Easy
// Approach: Return n if even; otherwise return 2 * n.
// Time Complexity: O(1)
// Space Complexity: O(1)

#include <iostream>

using namespace std;


class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n % 2 == 0){
            return n;
        } else {
            return n*2;
        }

    }
};