class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        
        // prefix product
        int prefix = 1;

        for (int i = 0; i< n;i++){
            ans[i] = prefix;
            prefix *= nums[i];
        }

        // suffix product 
        int suffix = 1;

        for (int i = n-1; i>=0; i--){
            ans[i] *= suffix;
            suffix *= nums[i];
        }
        return ans;
     
    }
};


// Pattern: Array / Prefix & Suffix
// Approach: Har index ke left elements ka product aur right elements ka product combine karo.
// Key Formula: Answer[i] = Prefix × Suffix
// Time Complexity: O(n)
// Space Complexity: O(1) extra

