class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxsum = nums[0];
        for (int i=0;i<nums.size();i++){
            int sum = 0;  // har new starting point ke lie reset
            for (int j=i;j<nums.size();j++){
               
                sum += nums[j];
                maxsum = max(maxsum,sum);
            }
        }
        return maxsum;
    }
};


// Time  = O(n²)
// Space = O(1)
