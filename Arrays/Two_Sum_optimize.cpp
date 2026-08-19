class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for (int i=0;i<n;i++){
            int needed = target - nums[i];
            if (mp.find(needed)!= mp.end()){ 
                // if (mp.count(needed))
                return {mp[needed],i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

// Problem: Two Sum
// Pattern: Array / Hashing
// Approach: unordered_map me value aur index store karke required element (target - nums[i]) ko search karna.
// Key Formula: needed = target - nums[i]
// Condition: mp.find(needed) != mp.end()
// Time Complexity: O(n) average
// Space Complexity: O(n)
