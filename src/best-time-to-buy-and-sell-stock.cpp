// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// runtime: beats 100% 0ms
// space: 25.14%
//

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buy = prices[0];
        for (int i = 1; i < prices.size(); ++i) {
            buy = std::min(buy, prices[i]);
            profit = std::max(prices[i] - buy, profit);
        }
        return profit;
    }
};
