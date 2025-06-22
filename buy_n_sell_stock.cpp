class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n=prices.size();
            int mini=prices[0],profit=0,cost;
            for(int i=1;i<n;i++)
            {
                cost = prices[i]-mini;
                profit = max(profit,cost);
                mini = min(prices[i],mini);
            }
            return profit;
        }
    };