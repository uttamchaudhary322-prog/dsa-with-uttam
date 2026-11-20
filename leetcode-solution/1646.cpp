// Problem: 1646. Get Maximum in Generated Array
// Difficulty: Easy
// Link: https://leetcode.com/problems/get-maximum-in-generated-array/
//
// Approach: Build the generated array using the problem's recurrence and
// return the largest value in it.
//
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> arr(n + 1, 0);
        if (n >= 1) {
            arr[1] = 1;
        }
        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                arr[i] = arr[i / 2];
            } else {
                arr[i] = arr[(i - 1) / 2] + arr[(i + 1) / 2];
            }
        }
        return *max_element(arr.begin(), arr.end());
    }
};