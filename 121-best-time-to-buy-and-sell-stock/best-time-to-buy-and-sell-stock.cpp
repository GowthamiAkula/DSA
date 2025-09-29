class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit  = 0, current_sum = 0;
        for(int i=1;i<prices.size();i++)
        {
            current_sum = max(0,current_sum+(prices[i]-prices[i-1]));
            max_profit = max(max_profit,current_sum);
        }
        return max_profit;
    }
};