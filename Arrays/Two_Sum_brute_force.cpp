class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i= 0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if (nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

// Problem: Two Sum
// Pattern: Array / Brute Force
// Approach: Two nested loops se har possible pair check karna.
// Condition: nums[i] + nums[j] == target
// Time Complexity: O(n²)
// Space Complexity: O(1)
