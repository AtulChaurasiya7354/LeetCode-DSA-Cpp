class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        vector<int> temp(n);

        for (int i=0;i<n;i++){
            temp[(i+k)%n] = nums[i];
    }
        nums = temp;
    }
};

// Pattern: Array / Two Pointers / Reversal
// Approach: Pehle complete array reverse karo, phir first k elements reverse karo, aur finally remaining elements reverse karo.
// Key Logic: reverse() ka use karke elements ko required positions par shift karna.
// Time Complexity: O(n)
// Space Complexity: O(1)
