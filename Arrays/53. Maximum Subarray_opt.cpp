class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0; 
        int maxsum = nums[0];
        for (int i=0;i<nums.size();i++){
        
        sum += nums[i];
        maxsum = max(maxsum,sum);

        if (sum < 0){
            sum = 0;
        }
            
     }
     return maxsum;
       
    }
};

// Time Complexity  = O(n)
// Space Complexity = O(1)
Problem: Maximum Subarray
// Pattern: Array / Kadane's Algorithm / Greedy-DP
// Approach: Ek hi traversal me current subarray ka sum maintain karo. Agar current sum negative ho jaye, use 0 se reset karo.
// Key Logic: sum += nums[i], then maxSum = max(maxSum, sum)
// Reset Condition: if (sum < 0) sum = 0
