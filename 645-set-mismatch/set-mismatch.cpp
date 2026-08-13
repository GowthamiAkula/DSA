class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        vector<int>ans;
        for(int x:nums)
        {
            mp[x]++;
            if(mp[x]>1)
            ans.push_back(x);
        }
        for(int i=1;i<=n;i++)
        {
            if(find(nums.begin(),nums.end(),i)==nums.end())
            ans.push_back(i);
        }
        return ans;
    }
};