// Problem: 1491. Average Salary Excluding the Minimum and Maximum Salary
// Difficulty: Easy
// Link: https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
//
// Approach: Sort the salaries, exclude the first and last values, and
// calculate the average of the remaining salaries.
//
// Time Complexity: O(n log n)
// Space Complexity: O(1)

class Solution {
public:
    double average(vector<int>& salary) {
        int sum = 0;
        sort(salary.begin(), salary.end());
        for (int i = 1; i < salary.size() - 1; i++) {
            sum += salary[i];
        }
        return static_cast<double>(sum) / (salary.size() - 2);
    }
};