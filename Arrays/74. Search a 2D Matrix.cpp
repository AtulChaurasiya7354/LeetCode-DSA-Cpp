class Solution {
public:
    bool searchInRow(vector<vector<int>>& mat, int target, int row) {// O(logn)
        // bS in column of after find the row
        int n = mat[0].size(); // row size
        int st = 0, end = n-1;
        
        while(st <= end){
            int mid = st + (end - st)/2;
            if(target == mat[row][mid]) {
                return true;
            }else if(target >= mat[row][mid]){
                st = mid + 1;
            }else {
                end = mid - 1;
            }
        }
        return false;

    }
    bool searchMatrix(vector<vector<int>>& mat, int target){ // O(logm)
        // Binary Search on total rows
        int m = mat.size(), n = mat[0].size();

        int startRow = 0, endRow = m-1;

        while(startRow <= endRow){
            int midRow = startRow + (endRow - startRow)/2;

            if(target >= mat[midRow][0] && target <= mat[midRow][n-1]){
                // find the Row Which has contain the target value
                return searchInRow(mat, target, midRow);

            }else if (target > mat[midRow][n-1]){
                // down => right side
                startRow = midRow +1;
            }else {
                // upside => mid - 1;
                endRow = midRow - 1;
            }

        }
        return false;
    }
    
};


// Pattern: Binary Search
// Approach:
// Binary Search on rows to find the possible row.
// Binary Search inside that row to find the target.
// Time Complexity: O(log m + log n)
// Space Complexity: O(1)
// Key Point:
// mat.size() → rows
// mat[0].size() → columns
// Technique: Two Binary Searches
// Difficulty: Medium
