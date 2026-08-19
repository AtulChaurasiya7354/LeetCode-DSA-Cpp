class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i<n; i++){
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};

// Problem: Merge Sorted Array
// LeetCode: #88
// Pattern: Array / Sorting
// Approach: nums2 ko nums1 ke empty positions me copy karke nums1 ko sort karna.
// Time Complexity: O((m+n) log(m+n))
// Space Complexity: O(1) (sorting implementation details aside)
