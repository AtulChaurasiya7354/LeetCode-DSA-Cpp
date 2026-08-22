class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i< n;i++){
            if(i > 0 && nums[i] == nums[i-1]) continue; // optimizer for not repeat set more than one time

            int j = i+1, k= n-1;
            
            while (j < k){
                int sum = nums[i] + nums[j] + nums[k];

                if(sum < 0){
                    j++;
                } else if(sum > 0){
                    k--;
                }else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++, k--;

                    while(j < k && nums[j] == nums[j-1]) j++; // optimizer for not repeat set
                }
            }
        }
        return ans;
    }
};


// Pattern: Sorting + Two Pointers

// Approach:

// Array ko sort karo.
// Ek element i par fix karo.
// Baaki 2 elements ke liye j aur k two pointers use karo.
// sum < 0 → j++
// sum > 0 → k--
// sum == 0 → triplet store karo aur duplicate values skip karo.

// Complexity:

// Time: O(n²)
// Space: O(1) (excluding output)

// Key Point:
// Sorted array ki wajah se two-pointer approach possible hoti hai aur duplicate triplets ko skip karna zaroori hai.
