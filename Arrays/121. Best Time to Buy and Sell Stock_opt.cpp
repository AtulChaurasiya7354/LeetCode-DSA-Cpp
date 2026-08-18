class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0;
        int minprice = prices[0];
        for (int i = 0;i<n;i++){
            minprice = min(minprice, prices[i]);

            int profit = prices[i] - minprice;
            
            maxprofit = max(maxprofit, profit);
        }
        return maxprofit;
    }
};


// Problem: Best Time to Buy and Sell Stock
// Pattern: Array / Greedy
// Approach: Ek baar array traverse karke ab tak ka minimum price maintain karo aur current price par possible profit calculate karo.
// Key Formula: profit = prices[i] - minPrice
// Update: minPrice = min(minPrice, prices[i])
// Maximum Profit: maxProfit = max(maxProfit, profit)
// Time Complexity: O(n)
// Space Complexity: O(1)
