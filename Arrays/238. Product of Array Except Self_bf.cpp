class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        
        for (int i = 0;i<n; i++){
            int multiply = 1;

            for (int j = 0; j<n;j++){
                if (i != j){
                    multiply *= nums[j];
                }
            }
        ans[i] = multiply;
     }
     return ans;
     
    }
};

// Pattern: Array / Brute Force
// Approach: Har index i ke liye poore array ko traverse karo aur i wale element ko skip karke baaki elements ka product calculate karo.
// Condition: if (i != j)
// Time Complexity: O(n²)
// Space Complexity: O(n) (output array ko exclude karne par extra space O(1))
