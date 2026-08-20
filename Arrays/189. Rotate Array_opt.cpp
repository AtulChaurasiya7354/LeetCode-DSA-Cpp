class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k = k % n;

        // Reverse complete array
        reverse(nums.begin(), nums.end());

        // Reverse first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Reverse remaining elements
        reverse(nums.begin() + k, nums.end());
    }
};

// Pattern: Array / Two Pointers / Reversal
// Approach: Pehle complete array reverse karo, phir first k elements reverse karo, aur finally remaining elements reverse karo.
// Key Logic: reverse() ka use karke elements ko required positions par shift karna.
// Time Complexity: O(n)
// Space Complexity: O(1)
