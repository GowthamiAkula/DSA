class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt = 0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<k)
            {
                cnt += 1;
            }
        }
        return cnt;
    }
};