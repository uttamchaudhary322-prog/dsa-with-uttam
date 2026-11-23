// Problem: 349. Intersection of Two Arrays
// Difficulty: Easy
// Link: https://leetcode.com/problems/intersection-of-two-arrays/
//
// Approach: Sort both arrays and use two pointers to find matching values,
// adding each distinct intersection value to the result.
//
// Time Complexity: O(n log n + m log m)
// Space Complexity: O(1), excluding the returned result

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] == nums2[j] && (ans.empty() || ans.back() != nums1[i])){
                ans.push_back(nums1[i]);
                i++;
                j++;                
            }else if(nums1[i]  < nums2[j]){
                i++;
            } else {
                j++;
            }
        }
        return ans;
    }
};