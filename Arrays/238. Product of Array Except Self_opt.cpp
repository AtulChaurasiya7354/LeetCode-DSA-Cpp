class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        
        // prefix product => ans
        

        for (int i = 1; i< n;i++){
            ans[i] = ans[i-1] * nums[i-1];
           
        }

        // suffix product 
        int suffix = 1;

        for (int i = n-2; i>=0; i--){
            suffix *= nums[i+1]; // ith suffix
            ans[i] *= suffix;
        }
        return ans;
     
    }
};


// Pattern: Array / Prefix & Suffix
// Approach: Har index ke left elements ka product aur right elements ka product combine karo.
// Key Formula: Answer[i] = Prefix × Suffix
// Time Complexity: O(n)
// Space Complexity: O(1) extra

