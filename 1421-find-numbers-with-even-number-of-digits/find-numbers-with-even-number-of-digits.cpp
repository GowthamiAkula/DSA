class Solution {
public:
    int findNumbers(vector<int>& nums) {
    
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int cnt=0;
            int x = nums[i];
            while(x>0)
            {
                int digit = x%10;
                cnt +=1;
                x /= 10;
            }
            if(cnt%2==0)
            ans +=1;
        }
        return ans;
    }
};