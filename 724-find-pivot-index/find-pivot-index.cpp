class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n,0);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
        for(int j=0;j<n;j++)
        {
            int left_sum = (j==0) ? 0 : prefix[j-1];
            int right_sum = prefix[n-1]-prefix[j];
            if(left_sum == right_sum)
            return j;
        }
        return -1;
    }
};