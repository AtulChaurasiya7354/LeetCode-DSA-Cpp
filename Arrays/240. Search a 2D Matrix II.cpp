class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size(), n = mat[0].size();

        int r = 0, c = n-1;
        while(r < m && c >= 0){
            if(target == mat[r][c]){
                return true;
            }else if(target < mat[r][c]){
                c--;
            }else {
                r++;
            }
        }
        return false;
    }
};

// Pattern: Matrix / 2D Array — Staircase Search
// Approach:
// Start from top-right corner.
// If target == mat[r][c] → true.
// If target < mat[r][c] → move left (c--).
// If target > mat[r][c] → move down (r++).
// Continue until r >= m or c < 0.
// Time Complexity: O(m + n)
// Space Complexity: O(1)
// Technique: Top-Right Corner Traversal
// Pattern to Remember:
// Top Right → Smaller = Left | Larger = Down
// Key Point: Har step par ek complete row ya column eliminate ho jata hai.
// Best Feature: Extra space ki zarurat nahi, aur matrix ko flatten nahi karna padta.
