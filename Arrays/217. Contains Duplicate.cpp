class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int x : nums) {
            mp[x]++;

            if (mp[x] > 1) {
                return true;
            }
        }

        return false;
    }
};

// Problem: Contains Duplicate

// Pattern: Array / Hashing

// Approach: unordered_map me har element ki frequency count karo.

// Condition: mp[x] > 1

// Time Complexity: O(n) average

// Space Complexity: O(n)

Key Point: unordered_map frequency store karta hai, isliye > 1 check kar sakte hain.
