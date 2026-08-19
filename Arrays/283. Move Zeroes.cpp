class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};


// Problem: Move Zeroes
// LeetCode: #283
// Pattern: Array / Two Pointers
// Approach: i se array traverse karo aur j ko next non-zero element ki position ke liye use karo.
// Condition: nums[i] != 0
// Operation: swap(nums[i], nums[j])
// Time Complexity: O(n)
// Space Complexity: O(1)
