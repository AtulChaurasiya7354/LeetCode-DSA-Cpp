class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int n = height.size();

        for (int i=0; i<n; i++){
            for (int j = i+1; j<n; j++){
                int ht = min(height[i],height[j]);
                int width = j - i;

                int ans = ht * width;

                maxwater = max(maxwater, ans);
            }
        }
        return maxwater;
    }
};
