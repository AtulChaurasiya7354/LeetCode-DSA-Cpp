class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int n = height.size();

        int lp = 0, rp = n-1;
        while (lp < rp){
            int ht = min(height[lp],height[rp]);
            int width = rp - lp;

            int ans = ht * width;

            maxwater = max(maxwater, ans);

            height[lp] < height[rp] ? lp++ : rp--;  // ternry if-else
        }
        return maxwater;
    }
};


// Pattern: Two Pointers
// Approach: Start from both ends, calculate area, update maximum, and move the pointer having smaller height.
// Time: O(n)
// Space: O(1)
