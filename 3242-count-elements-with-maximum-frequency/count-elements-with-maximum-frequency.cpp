class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> arr;
        for(int x:nums)
        {
            arr[x]++;
        }
        int max = 0;
        for(auto x:arr)
        {
            if(x.second > max)
            {
                max = x.second;
            }
        }
        int ans = 0;
        for(auto x:arr)
        {
            if(x.second==max)
            {
                ans += max;
            }
        }
        return ans;
    }
};