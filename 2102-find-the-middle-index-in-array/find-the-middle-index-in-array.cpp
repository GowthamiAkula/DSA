class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        ans[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            ans[i]=ans[i-1]+nums[i];
        }
        for(int j=0;j<n;j++)
        {
            int ls=(j==0)?0:ans[j-1];
            int rs=ans[n-1]-ans[j];
            if(ls==rs)
            return j;
        }
        return -1;
    }
};