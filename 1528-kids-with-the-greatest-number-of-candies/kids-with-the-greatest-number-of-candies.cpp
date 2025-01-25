class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxCandy = *max_element(candies.begin(), candies.end());  // Find the max candy count
        
        for(int i = 0; i < candies.size(); i++) {
            int added = candies[i] + extraCandies;  // Add extra candies to current kid
            if(added >= maxCandy)
                result.push_back(true);  // If new total is greater or equal to max, add true
            else
                result.push_back(false); // Otherwise, add false
        }
        return result;
    }
};
