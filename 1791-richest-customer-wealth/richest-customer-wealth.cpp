class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        int i;
        int customerWealth;
        for(i = 0; i < accounts.size(); i++) {
            customerWealth = 0;  // Proper initialization inside the loop
            for(int j = 0; j < accounts[i].size(); j++) {
                customerWealth += accounts[i][j];
            }
            maxWealth = max(maxWealth, customerWealth);
        }
        return maxWealth;
    }
};
