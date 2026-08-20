class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;

        for (int step=0; step<k; step++){
            int last = nums[n-1];

            for (int i=n-1;i>0;i--){
                nums[i] = nums[i-1];
            }
            nums[0] = last;
        }
        
    }
};


// Pattern: Array / Rotation
// Approach: Array ko ek step right rotate karo aur ye process k times repeat karo.
// Key Logic: Last element ko save karke baaki elements ko right shift karo.
// Time Complexity: O(n × k)
// Space Complexity: O(1)
