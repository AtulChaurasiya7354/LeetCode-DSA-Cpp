class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n-1;

        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[mid],nums[low]);
                mid++,low++;
            }else if (nums[mid] == 1){
                mid++;
            }else { //2
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
};


// LeetCode #75 — Sort Colors

// Pattern: Dutch National Flag Algorithm
// Approach: Use low, mid, and high pointers to divide the array into 0s, 1s, and 2s in a single pass.

// 0 → swap with low → low++, mid++
// 1 → mid++
// 2 → swap with high → high--

// Time: O(n)
// Space: O(1)
