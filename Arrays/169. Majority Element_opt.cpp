class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int condidate = 0;
        int count = 0;
        for (int x : nums){
            if (count==0){
                condidate = x;
            }
            if (x==condidate){
                count++;
            }
            else {
                count--;
            }
        }
        return condidate;
    }
};

// Pattern: Array / Boyer-Moore Voting Algorithm
// Approach: Ek candidate aur count maintain karo. Same element mile to count++, different element mile to count--. count == 0 hone par new candidate choose karo.
// Key Logic: x == candidate → count++, otherwise count--
// Time Complexity: O(n)
// Space Complexity: O(1)
