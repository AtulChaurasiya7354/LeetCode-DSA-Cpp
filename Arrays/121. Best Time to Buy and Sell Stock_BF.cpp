class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0;
        for (int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                int profit = prices[j] - prices[i];
                maxprofit = max(maxprofit,profit);
            }
        }
        return maxprofit;
    }
};

// Problem: Best Time to Buy and Sell Stock
// Pattern: Array / Brute Force
// Approach: Har possible buying day aur uske baad ke selling day ko check karke maximum profit find karna.
// Condition: prices[j] - prices[i]
// Key Point: Buy day hamesha sell day se pehle hona chahiye, isliye j = i + 1.
// Profit: Selling Price - Buying Price
// Time Complexity: O(n²)
// Space Complexity: O(1)
